#include<iostream>
using namespace std;
int main()
{
    int n = 10;
    for(int i =1; i<n; i++){
        for(int sp = 1; sp<i; sp++){
            cout<<" ";
        }
        for(int j = 1; j<=n-i; j++){
            cout<<" "<<char(64 + j);
        }
        cout<<endl;
    }
    for(int i =1; i<n; i++){
        for(int sp = n-1; sp > i; sp--){
            cout<<" ";
        }
        for(int j = 1; j<=i; j++){
            cout<<" "<<char(64 + j);
        }
        cout<<endl;
    }
    return 0;
}