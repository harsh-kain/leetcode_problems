#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int countGoodSubsets(vector<int> &arr) 
{
    int n = arr.size();
    int count = 0;
    vector<int> res(n,1);
    sort(arr.begin(), arr.end());
    for(int i =0; i<n;i++){
        for(int j = 0; j<i; j++){
            if(arr[i] % arr[j] == 0){
                res[i] += res[j];
                
            }
            for(int k =0; k<res.size(); k++){
                cout<<res[k]<<" ";
            }
        }
        
        count += res[i];
    }
    cout<<"_"<<count<<endl;
    return count;
	
}
int main()
{
    vector<int> input = {2 ,4};
    countGoodSubsets(input);
    return 0;
}