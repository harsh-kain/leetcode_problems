#include<iostream>
#include<vector>
using namespace std;
int maximumWealth(vector<vector<int>>& accounts) {
    int temp = accounts.size();
    int max = 0;
    for(int i = 0; i<temp; i++){
        int sum = 0;
        for(int j = 0; j<accounts[i].size(); j++){
            sum += accounts[i][j];
        }
        if(sum > max){
            max = sum;
        }

    }
    return max;
}
int main()
{
    return 0;
}