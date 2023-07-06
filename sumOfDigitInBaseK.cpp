#include<iostream>
using namespace std;
int sumBase(int n, int k) {
    int sum = 0;
        while(n > 0) {
            sum += n % k;
            n = n / k;
        }
    return sum;
}
int main()
{
    return 0;
}