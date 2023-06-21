#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> addToArrayForm(vector<int>& num, int k) {
    vector<int> ans;
    int total = 0;
    int count =0 ;
    for (int i = 0; i < num.size(); i++)
    {
        total  = total * 10 + num[i];
        count++;
    }
    total += k;
    int n = total;
    while(n != 0){
        int rem = n % 10; 
        ans.push_back(rem);
        n /= 10;

    }
    reverse(ans.begin(),ans.end());
    for (int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return ans;
}
int main()
{
    vector<int> arr = {2,1,5};
    addToArrayForm(arr, 806);
    return 0;
}