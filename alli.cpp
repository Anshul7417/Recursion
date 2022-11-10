#include <iostream>
#include<vector>
#include<algorithm>
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

void alli(int arr[],int idx,int n,int k,vector<int>& vec){
    if(idx==n) return;
    alli(arr,idx+1,n,k,vec);
    if(arr[idx]==k){
        vec.push_back(idx);
    }

}

int main(){
    int n;
    cin >> n;
    vector<int>vec;
    int arr[100];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    // display(arr, 0, n);
    alli(arr,0,5,3,vec);
    reverse(vec.begin(),vec.end());
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i];

        return 0;
}