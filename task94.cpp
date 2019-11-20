#include <iostream>
using namespace std;
int main(){
	int n;
double k=0.0;
	cin>>n;
	for(int i=1;i<=n;i++){
		k=k+1.0/i;
	}
	cout<<k;
}
