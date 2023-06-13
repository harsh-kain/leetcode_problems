#include<iostream>
#include<vector>
using namespace std;

int maxProduct(vector<int>& nums) {
    int ans = 0, temp = 0;
    for(int i = 0; i<nums.size(); i++){
        for(int j = i+1; j<nums.size(); j++){

            temp = ((nums[i] - 1) * (nums[j] - 1));
            if(temp > ans){
                ans = temp;
            }
        }
    }
    return ans;
}
int main()
{
    return 0;
}