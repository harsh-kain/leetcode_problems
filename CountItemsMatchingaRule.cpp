#include<iostream>
#include<vector>
using namespace std;
int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
    int count = 0;
    if(ruleKey == "type"){
        for (int i = 0; i < items.size(); i++)
        {   
            if(items[i][1] == ruleValue){
                count++;
            }
        }
    }
    if(ruleKey == "color"){
        for (int i = 0; i < items.size(); i++)
        {
            if(items[i][0] == ruleValue){
                count++;
            }
        }
    }
    if(ruleKey == "name"){
        for (int i = 0; i < items.size(); i++)
        {
            if(items[i][2] == ruleValue){
                count++;
            }
        }
    }
    return count;
}
int main()
{
    vector<vector<string>> items ={{"ii","iiiiiii","ii"},{"iiiiiii","iiiiiii","ii"},{"ii","iiiiiii","iiiiiii"}};
    string keyRule = "color";
    string keyValue = "ii";

    cout<<countMatches(items,keyRule,keyValue);

    return 0;
}