#include<iostream>
using namespace std;
int main()
{
    return 0;
}
int countOdds(int low, int high) {
    int count = 0;
    for(int i = low; i<=high; i++){
        if(i % 2 != 0){
            count++;
        }
    }
    return count;
}