#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    int mon=n%10,dek=n%100/10;
    if(mon*dek==0)
        cout << "Never";
    else {
    if(mon*dek<10)
        cout << "Week";
    else
        cout << "Month";
    }
    return 0;
}
