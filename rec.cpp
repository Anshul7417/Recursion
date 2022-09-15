#include<iostream>
using namespace std;

void printDec(int n){
    cout<<n<<endl;
    if(n<=1) return;
    printDec(n-1);
}

void printInc(int n){
    if(n<=0) return;
    printInc(n-1);
    cout<<n<<endl;
}

int main()
{
    printInc(5);
    return 0;
}