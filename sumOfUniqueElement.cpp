#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int l=0,s=0;
        int flage=0;
        sort(nums.begin(), nums.end());
        for(int i=1;i<nums.size();i++)
        {
            if(nums[l]==nums[i])
            {
                flage=1;
                nums[i]=0;
            }
            else
            {
                if(flage==1){
                    nums[l]=0;
                }
                flage=0;
                l=i;
            }
        }
        if(flage==1)
        {
            nums[l]=0;
        }

        for(int i=0;i<nums.size();i++)
        {
            s +=nums[i];
        }
        return s;
    }
};

int main()
{
    return 0;
}