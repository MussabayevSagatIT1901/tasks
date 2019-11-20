#include<iostream>
using namespace std;
int main(){
    int n,k=1;
    double p=0,w=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int k;k<=2*i;k++){
            p=k*(k+1);
        }
        w=w+p;
    }
    cout<<w;
}
