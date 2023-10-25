#include<iostream>
using namespace std;
int main()
{
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 0; j <= 5; j++)
    //     {   
    //         char ch = 'A' + (i + j - 1);
    //         cout<<ch;
    //     }
    //     cout<<endl;
        
    // }
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {   
    //         char ch = 'A' + (i + j - 1);
    //         cout<<ch;
    //     }
    //     cout<<endl;
        
    // }
    for(int i =1; i<=5; i++){
        char ch = 'A' + 5 - i;
        for(int j = 1; j<=i; j++){
            cout<<ch;
            ch = ch + 1;
        }
        cout<<endl;
    }
    
    return 0;
}