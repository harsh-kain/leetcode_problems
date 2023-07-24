#include<iostream>
#include<stack>
using namespace std;
class Solution {
public:
    int minLength(string s) {
        stack<int>st;
        for(int i = 0; i<s.length(); i++){
                
            if( s[i] == 'B'  && !st.empty() && st.top() == 'A'){
                st.pop();
            }
            else if(s[i] == 'D' && !st.empty() && st.top() == 'C' ){
                st.pop();
            }
            else{

                st.push(s[i]);
            }
        }
       
        return st.size();
    }
};
int main()
{
    return 0;
}