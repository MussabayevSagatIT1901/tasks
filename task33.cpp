#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES 
using namespace std;
int main() {
	double a,b,c;
	cin>>b>>c;
	if (b>=0 && c>=0 && b-sqrt(c)>=0) {
		a=sqrt(b-sqrt(c));
		cout<<a;
	}
	else {
		cout<<"No square";
	}
	return 0;
}
