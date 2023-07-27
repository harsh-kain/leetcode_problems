#include<iostream>
#include<vector>
using namespace std;
int findNumbers(vector<int>& nums) {
    int count = 0;
    int ans = 0;
    for(int i =0; i<nums.size(); i++){
        int n = nums[i];
        count = 0;
        while(n != 0){
            n = n / 10;
            count++;
        }
        if(count % 2 == 0){
            ans++;
        }
    }
    return ans;
}
int main()
{
    vector<int> nums = {1,2,3,4,5,6,7,8,9,10};
    findNumbers(nums);
    return 0;
}