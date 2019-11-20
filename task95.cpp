#include <iostream>
using namespace std;
int main(){
	double p=1;
	int a,n;
	cin>>a>>n;
	for(int i=1;i<=n;i++){
		p=p*(a+i)*(a+i);
	}
	cout<<p;
}
