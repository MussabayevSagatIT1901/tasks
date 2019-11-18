#include <iostream>
using namespace std;
int main()
{
    int b,c,count = 1;
    cin>>b;
    cin>>c;
    for (int i = 0; i < b; i++)
    {
        for(int j = 0; j < c; j++)
        cout << 'A';
        count++;
        cout<<endl;
    }
    return 0;
}
