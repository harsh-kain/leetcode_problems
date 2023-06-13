#include<iostream>
#include<vector>
using namespace std;
int mostWordsFound(vector<string>& sentences) {
    int ans = 0, count = 0;
    // int j =0;
    for(int i = 0; i<sentences.size(); i++){
        string temp = sentences[i];
        count = 0;
        for(int j = 0; j<temp.length(); j++){
            if(temp[j] == ' '){
                count++;
            }
            if(count > ans){
                ans = count;
            }
        }
    }
    return ans+1;
}
int main()
{
    return 0;
}