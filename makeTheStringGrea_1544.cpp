#include<iostream>
using namespace std;
class Solution {
public:
    string makeGood(string s) {
         for(int i=0;i<s.size()-1 && s.size()>1;i++){
            if(abs(s[i]-s[i+1])==32){
                s.erase(i,2);
                i=-1;
            }
        }
        return s;
    }
};
int main()
{
    return 0;
}