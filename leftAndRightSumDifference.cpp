#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftSum(n,0); 
        vector<int> rightSum(n,0); 
        vector<int> ans(n,0);

        for(int i = 0; i<n-1; i++){
            leftSum[i+1] = leftSum[i] + nums[i]; 
        } 
        for(int i = n-2; i>=0; i--){
            rightSum[i] = rightSum[i+1] + nums[i+1]; 
        } 
        for(int i = 0; i<n; i++){
            ans[i] = abs(leftSum[i] - rightSum[i]);
        } 
        return ans;
    }
};
int main()
{
    return 0;
}