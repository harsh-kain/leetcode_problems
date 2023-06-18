#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    vector<bool> ans;
    int max = *max_element(candies.begin(), candies.end());
    for(int i =0; i<candies.size(); i++){
        if(candies[i] + extraCandies >= max){
            ans.push_back(candies[i]+extraCandies);
        }
        else{
            ans.push_back(0);

        }

    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    return ans;

}

int main()
{
    vector<int> candies = {2,3,5,1,3};
    kidsWithCandies(candies, 3);

    return 0;
}