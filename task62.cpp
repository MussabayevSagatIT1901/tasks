#include<iostream>
using namespace std;
int main(){
 int a,q,w,e,r,t,k=0;
 cin>>a;
 q=a/10000;
 w=(a/1000)%10;
 e=(a/100)%10;
 r=(a%100)/10;
 t=a%10;
cout<<q*10000+k+e*100+k+t;
}
