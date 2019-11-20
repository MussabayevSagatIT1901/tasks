#include <iostream>
#include<cmath>
using namespace std;
int main(){
double x=0,t,l;
for(double i=3;i<112;i=i+2){
	x=x+cos(i/(i+2));
	}
cout<<x;
}
