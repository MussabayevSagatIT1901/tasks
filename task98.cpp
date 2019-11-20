// à á â ã 
#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	double p=10,a;
	for(int i=1;i<10;i++){
		p=p*0.1+p;
		cout<<p<<endl;
	}
	p=10;
	a=a+p;
	for(int i=1;i<7;i++){
		
		p=p*0.1+p;
		a=a+p;
	}
	cout<<a<<endl;
	p=10;
	a=a+p;
	for(int i=1;i<n;i++){
		p=p*0.1+p;
		a=a+p;
	}
	cout<<a<<endl;
	p=10;
	a=a+p;
	int i=0;
	while (a<80){
	
	for(int i=0;i<p;i++){
		p=p*0.1+p;
		a=a+p;
		}
	
}
cout<<i;
}
