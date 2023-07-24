#include<iostream>
#include<vector>
#include<stack>
#include <string>
using namespace std;
class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int sum = 0;
        for(int i = 0; i<operations.size(); i++){
            if(st.empty()){
                st.push(stoi(operations[i]));
            }
            else if(operations[i] == "D"){
                int d = st.top();
                st.push(d*2);

            }
            else if(operations[i] == "C"){
                st.pop();
            }
            else if(operations[i] == "+"){
                int temp = st.top();
                st.pop();
                int add = temp + st.top();
                st.push(temp);
                st.push(add);
            }
            else{
                st.push(stoi(operations[i]));
            }
        }
        while(!st.empty()){
            sum += st.top();
            st.pop();
        }

        return sum;
    }
};
int main()
{
    return 0;
}