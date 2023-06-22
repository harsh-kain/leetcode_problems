#include<iostream>
using namespace std;
string mergeAlternately(string word1, string word2) {
    int i = 0;
    int j =0 ;
    int word1Len = word1.length();
    int word2Len = word2.length();
    string ans = "";
    while (i != word1Len && j != word2Len)
    {
        ans.push_back(word1[i]);
        ans.push_back(word2[j]);
        i++;
        j++;
    }
    if(i == word1Len){
        for(int k = j; k<word2Len; k++){
            ans.push_back(word2[k]);
        }
    }
    else{
        for(int k = i; k<word1Len; k++){
            ans.push_back(word1[k]);
        }
    }
    // for (int i = 0; i < ans.length(); i++)
    // {
    //     cout<<ans[i];
    // }
    // cout<<endl;
    return ans;
}
int main()
{
    string word1 = "ab";
    string word2 = "pqrs";
    mergeAlternately(word1, word2);
    return 0;
}