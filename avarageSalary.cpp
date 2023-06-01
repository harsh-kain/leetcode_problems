#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    return 0;
}
double average(vector<int>& salary) {
        double ans = 0;
        sort(salary.begin(), salary.end());
        int n  = salary.size() - 2;
        for(int i = 1; i<salary.size()-1; i++){
            ans += salary[i];
        }
        return ans / n;
    }