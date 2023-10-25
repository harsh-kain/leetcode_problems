#include<iostream>
using namespace std;

int main(){
    int n = 5;
    // for (int i = 0; i <n; i++)
    // {
    //     for (int sp = n-i; sp > 0; sp--)
    //     {
    //         cout<<" ";
    //     }
    //     for(int j = 0; j<=i; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
        
    // }
    // for (int i = 1; i <=n; i++)
    // {
    //     for (int sp = n-i; sp > 0; sp--)
    //     {
    //         cout<<" ";
    //     }
    //     for(int j = 1; j<=i; j++){
    //         cout<<j;
    //     }
    //     for(int k = i-1; k>0; k--){
    //         cout<<k;
    //     }
    //     cout<<endl;
        
    // }
    // for(int i =1;i<=n; i++){
    //     for(int sp = n-i;sp>0; sp--){
    //         cout<<"  ";
    //     }
    //     for(int j =0; j<(i*2-1); j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    for(int i = 1; i<n; i++){
        for(int j = 1; j<n-i+1; j++){
            cout<<j<<" ";
        }
        for(int st =0; st < i-1; st++){
            cout<<"* ";
        }
        for(int st_1 = 0; st_1 < i-1; st_1++ ){
            cout<<"* ";
        }
        for(int k = n-i; k>0; k--){
            cout<<k<<" ";
        }
        cout<<endl;
    }
}