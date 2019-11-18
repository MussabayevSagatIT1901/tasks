//d 1
//e 2
#include <iostream>
using namespace std;
int main(){
	double a, b;
	cin>>a>>b;
	double d= a, e = a;
	for(int i = 0; i<5; i++){
		d=d+a *(b/100);
		e=e*(b/100+1); 
	}
	cout<<d<<" "<<e;
}
