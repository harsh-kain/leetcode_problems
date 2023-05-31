// SQRT(X) using binary search 

class Solution {
public:
    int mySqrt(int x) {
        int s = 0;
        int e = x;
        long int mid = s + (e-s) / 2;
        int ans = -1;
        while(s <= e){
            if((mid * mid) == x){
                return mid;
            }

            if((mid * mid) < x){
                ans = mid;
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }
};
#include<iostream>
using namespace std;
int main()
{
    return 0;
}