class Solution {
public:
    int multiply(int n){
    int mul = 1;
    while(n != 0){
        int rem = n % 10;
        mul = mul * rem;
        n /= 10;
    }
    return mul;
}
int sum(int n){
    int sum = 0;
    while(n != 0){
        int rem = n % 10;
        sum = sum + rem;
        n /= 10;
    }
    return sum;
}
int subtractProductAndSum(int n) {
    return multiply(n) - sum(n);
}
};
#include<iostream>
using namespace std;
int main()
{
    
    return 0;
}