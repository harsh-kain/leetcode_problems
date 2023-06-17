#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> ans;
        int sum = 0;
        ans.push_back(0);
        for(int i =0 ; i<gain.size(); i++){
            sum += gain[i];
            ans.push_back(sum);
        }   
        int min = INT_MIN;
        for(int i =0; i<ans.size(); i++){
            if(ans[i] > min){
                min = ans[i];
            }
        }
        return min;
    }
};
int main()
{
    return 0;
}