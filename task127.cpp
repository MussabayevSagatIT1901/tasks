#include <iostream>
using namespace std;
int main() {
    int n, flag=0;
    cin >> n;
    for(int i = 2; i <= n/2; i++) {
        if(n % i == 0) {
            cout << "Not Prime" << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << "Prime" << endl;
    return 0;
}
