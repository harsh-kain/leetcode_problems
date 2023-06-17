#include<iostream>
#include<vector>
using namespace std;
vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    int count;
    vector<int> ans;
    for(int i = 0; i<nums.size(); i++){
        count = 0;
        int n = nums[i];
        for(int j = 0; j<nums.size(); j++){
            if(i == j){
                continue;
            }
            if(nums[j] < n){
                count++;
            }
        }
        ans.push_back(count);
    }
    return ans;
}

int main()
{
    vector<int>nums= {8,1,2,2,3};
    smallerNumbersThanCurrent(nums);
    return 0;
}