#include <iostream>
#include<cmath>
using namespace std;
int main(){
	double p=0;
	int x,n;
	cin>>x>>n;
	for(int i=1;i<=n;i++){
	p=p+(1/pow(cos(x),n));
	}
	cout<<p;
	
}
