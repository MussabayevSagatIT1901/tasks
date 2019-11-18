#include <iostream>
using namespace std;
int main(){
	double a, b, c,d,e,f;
	cin>>a>>b>>c;
	d = a + b;
	e = c -a;
	f = a + b + c;
	a = d;
	b = e;
	c = f;
	cout<<a<<" "<<b<<" "<<c;
	return 0;
}
