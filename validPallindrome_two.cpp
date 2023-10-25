#include<iostream>
using namespace std;
bool checkPallindrome(string str){
    int start = 0;
    int end = str.size() - 1;
    while(start < end){
        if(str[start] != str[end]){
            return false;
        }
        start++;
        end--;
    }
    cout<<str<<endl;
    return true;
}
bool validPalindrome(string s) {
    if(checkPallindrome(s)){
        return true;
    }
    else{
        int start = 0;
        int end = s.size()-1;
        int en;
        while(start < end){
            if(s[start] == s[end]){
                start++;
                end--;
            }
            else if(s[start] != s[end]){
                s.erase(end,1);  
                if(checkPallindrome(s) == true){
                    return true;
                }
                else{
                    s.erase(start,1);
                    if(checkPallindrome(s) == true){
                        return true;
                    }
                    else{
                        return false;
                    }
                }
            }
        }
        
    }
    return true;
}
int main()
{
    string s = "deeee";
    cout<<validPalindrome(s)<<endl;
    return 0;
}