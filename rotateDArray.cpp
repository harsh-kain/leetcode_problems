#include<iostream>
using namespace std;
void reverseArray(int arr[] , int start, int end){
    // int start = 0;
    // int end = d-1;
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void rotateDArray(int arr[], int d, int n){

    reverseArray(arr, 0 , d-1);

    for (int i = 0; i < n; i++)
    {   
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    reverseArray(arr, d , n-1);

    for (int i = 0; i < n; i++)
    {   
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    reverseArray(arr, 0 , n-1);

    for (int i = 0; i < n; i++)
    {   
        cout<<arr[i]<<" ";
    }
    
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    rotateDArray(arr, 3 , 7);
    return 0;
}