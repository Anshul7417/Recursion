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

void incdec(int n){
    if(n==0) return;
    cout<<n<<endl;
    incdec(n-1);
    cout<<n<<endl;
}

int fact(int n){
    if(n<=0)  return 1;
    return n*fact(n-1);
}

int pw(int x,int n){
    if(n==0) return 1;
    return x*pw(x,n-1);
}

int intlogpw(int x,int n){
    if(n<=0) return 1;
    if(n%2==0){

        return intlogpw(x,n/2)*intlogpw(x,n/2);
    }else{

    return intlogpw(x,n/2)*intlogpw(x,n/2)*x;}
}

int main()
{
    // incdec(5);
    // cout<< fact(5);
    // cout<<pw(5,3);
    cout<<intlogpw(5,3);
    return 0;
}