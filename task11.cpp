#include <iostream>
#include<cmath>
using namespace std;
int main(){
double t,x;
t=0.0;
cin>>x;
t=(abs(x*1.0-5)-sin(x*1.0))/3+sqrt(x*x*1.0+2014)*cos(2*x*1.0)-3;
cout<<t;
return 0;
}
