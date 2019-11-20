#include<iostream>
using namespace std;
int main(){
    int a,q,w,e,r;
    cin>>a;
q=a/1000;
w=(a/100)%10;
e=(a%100)/10;
r=a%10;
if(q<5){
    cout<<q;
}
 if (w<5) {
    cout<<w;
}
 if (e<5){
    cout<<e;
}
if( r<5){
    cout<<r;
}
if (q>=5){cout<<q;}
 if (w>=5){cout<<w;}
if  (e>=5){cout<<e;}
 if (r>=5){cout<<r;}
}

