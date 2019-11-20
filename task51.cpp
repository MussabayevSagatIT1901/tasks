#include<iostream>
using namespace std;
int main(){
    int a,b,c,k,m,f,z=0;
    cin>>a>>b>>c;
    k=a+b;
    m=a+c;
    f=b+c;
    if(k==c)
        z++;
        else z;
     if  (m==b) z++;
    else z;
    if  (f==a) z++;
    else z;
    if(z>0){
        cout<<"yes";
    }
    else cout<<"no";
}
