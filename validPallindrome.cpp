#include<iostream>
using namespace std;
bool isPalindrome(string s) {

    // string str = "";
    // for(int i = 0; i<s.size(); i++){
    //     if((s[i] >= 48 && s[i] <= 57)){
    //         str.push_back(s[i]);
    //     }
    //     else if((s[i] >= 65 && s[i] <= 90)){
            
    //         s[i] = s[i] + 32;
    //         str.push_back(s[i]);
    //     }
    //     else if(s[i] >= 97 && s[i] <= 122){
    //         str.push_back(s[i]);
    //     }
    // }
    
}

char convert(char s){
    if(s >= 65 && s <= 90){
        char temp;
        temp = s+32;
        return temp;
    }
    else{
        return s;
    }
}
// bool isPalindromOptimized(string s){
//     int start = 0;
//     int end = s.size()-1;
//     cout<< convert('b')<<endl;
//     while(start < end){
//         if(s[start] >= 65 && s[start])


//     }
//     return true;
// }
int main()
{
    string str = "0P";
    cout<<isPalindrome(str)<<endl;
    return 0;
}