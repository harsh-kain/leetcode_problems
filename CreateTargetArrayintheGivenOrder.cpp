#include<iostream>
#include<vector>
using namespace std;
vector<int> createTargetArray(vector<int>& nums, vector<int>& index){
    vector<int>ans;
    int temp =0;
    for (int i = 0; i < nums.size(); i++)
    {
        // temp = nums[index[i]];
        ans.push_back(index[i],nums[i]);
        // cout<<temp<<" ";
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    return nums;
}
int main()
{
    vector<int> a = {0,1,2,3,4};
    vector<int> b = {0,1,2,2,1};
    createTargetArray(a,b);
    return 0;
}