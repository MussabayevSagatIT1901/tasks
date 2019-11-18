#include <iostream>
#include<cmath>
using namespace std;
int main(){
	double t,x;
	t=0.0;
	cin>>x;
	t=pow(M_E,x-2)+abs(sin(x))-pow(x,4)*cos(1/x);
	cout<<t;
	return 0;
	
}
