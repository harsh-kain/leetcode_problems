#include<iostream>
#include<vector>
using namespace std;
void moveZeroes(vector<int>& nums) {
    if(nums.size()==1) return;
    int l=0, r=0;
    while(r<nums.size()){
        if(nums[r]!=0){
            swap(nums[l],nums[r]);
            for (int i = 0; i < nums.size(); i++)
            {
                cout<<nums[i]<<" ";
            }
            l++;
        }
        r++;
    }
}
int main()
{
    vector<int> nums = {0,1,0,3,12};
    moveZeroes(nums); 
    return 0;
}