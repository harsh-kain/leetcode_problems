#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        long int ans = 0;
        long int ans2 = 0;

        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 1){
                ans++;
            }
            else if(nums[i] != 1){
                if(ans > ans2){
                    ans2 = ans;
                    ans = 0;
                }
                else{
                    ans = 0;
                }
            }

        }
        if(ans > ans2){
            return ans;
        }
        else{
            return ans2;
        }
    }
};
int main()
{
    return 0;
}