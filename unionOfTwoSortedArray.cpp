#include<iostream>
#include<vector>
using namespace std;
vector<int> unionOfArray(vector<int> arr1, vector<int>arr2){

    vector <int> result;
    int i = 0;
    int j = 0;
    int n1 = arr1.size();
    int n2 = arr2.size();
    while(i < n1 && j < n2){
        if(arr1[i] < arr2[j]){
            if(result.size() == 0 || result.back() != arr1[i]){
                result.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(result.size() == 0 || result.back() != arr2[j]){
                result.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(i < n1){
        if(result.size() == 0 || result.back() != arr1[i]){
                result.push_back(arr1[i]);
            }
        i++;
    }

    while(j < n2){
        if(result.size() == 0 || result.back() != arr2[j]){
                result.push_back(arr2[j]);
            }
        j++;
    }

    
    for(int i = 0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return result;
}
int main()
{
    vector<int> arr1 = {1,1,2,3,4,5,5,6};
    vector<int> arr2 = {1,1,2,2,3,4,5,6,7,7,8,8};
    
    unionOfArray(arr1,arr2);
    return 0;
}