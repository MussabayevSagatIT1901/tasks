#include <iostream>
using namespace std;
int main()
{
    int b,count = 1;
    cin>>b;
    for (int i = 0; i < b; i++)
    {
        for(int j = 0; j < count; j++)
        cout << '0';
        count++;
        cout<<endl;
    }
    return 0;
}


