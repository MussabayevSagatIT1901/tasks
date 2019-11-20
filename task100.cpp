#include<iostream>
using namespace std;
int main(){
    int k,l,m,n;
  
    for(int a=1000;a<=9999;a++){

	k=a/1000;
    l=(a%1000)/100;
    m=(a%100)/10;
    n=a%10;
    
    if ((k==5)||(k==6)||(l==5)||(l==6)||(m==5)||(m==6)||(n==5)||(n==6))
    {

    }
    else {
cout<<a<<endl;      
}
        
    }
}

