#include<iostream>
using namespace std;
bool isValid(string s) {
    int round, square, curly = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == '['){
            square++;
            if(s[i+1] != ']'){
                return false;
            }
        }
        if(s[i] == '{'){
            if(s[i+1] != '}'){
                return false;
            }
        }
        if(s[i] == '('){
            if(s[i+1] != ')'){
                return false;
            }
        }
    }
    return true;
    
}
int main()
{
    string s = "(]";
    cout<<isValid(s)<<endl;
    return 0;
}