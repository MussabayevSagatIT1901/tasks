#include<iostream>
using namespace std;
int main(){
    int a,k,l,m,n;
    cin>>a;
    k=a/1000;
    l=(a%1000)/100;
    m=(a%100)/10;
    n=a%10;
    if ((k==l)||(k==m)||(k==n)||(l==m)||(l==n)||(m==n))
    {
        cout<<"have same numbers";
    }
    else {
        cout<<"haven't  same numbers";
}
        
    }

