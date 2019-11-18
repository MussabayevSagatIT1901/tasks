#include <iostream>
#include<cmath>
using namespace std;
int main(){
	double t,a,b,x;
	cin>>a>>b>>x;
	t=pow((x*x+b),0.2)-(b*b*pow(sin(x+a),3))/x;
	cout<<t;
}

