#include<iostream>
using namespace std;
string truncateSentence(string s, int k) {
    int temp = 0, i =0;
    string ans;
    for(int i = 0; i<=s.length(); i++){
        ans.push_back(s[i]);
        if(s[i] == ' '){
            temp++;
        }
        if(temp == k ){
            break;
        }

    }
    ans.pop_back();
    return ans;
}
int main()
{
    return 0;
}