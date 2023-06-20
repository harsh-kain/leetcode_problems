#include<iostream>
#include<vector>
using namespace std;
vector<int> decode(vector<int>& encoded, int first) {
    int temp = first;
    vector<int> ans ;
    ans.push_back(first);
    for(int i = 0; i<encoded.size(); i++){
        temp = encoded[i] ^ temp;
        ans.push_back(temp);
    }
    return ans;
}
int main()
{
    return 0;
}