#include <iostream>
using namespace std;

void display(int arr[], int idx, int n){
    // write your code here
    // if(idx==n) return;
    // cout<<arr[idx]<<endl;
    // display(arr,idx+1,n);
    if(idx==n) return;
    display(arr,idx+1,n);
    cout<<arr[idx]<<endl;
}

int main(){
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    display(arr, 0, n);
}