#include<iostream>
using namespace std;
int main(){
    int k,l,m,n;
  
    for(int a=1000;a<=9999;a++){

	k=a/1000;
    l=(a%1000)/100;
    m=(a%100)/10;
    n=a%10;
    
    if ((k==l)||(k==m)||(k==n)||(l==m)||(l==n)||(m==n))
    {

    }
    else {
cout<<a<<endl;      
}
        
    }
}

