#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main ()
{
    int n,k;
    cin >> n >> k;
    if (n>12)
    {
        if(k==1)
            cout << "Duo xronia sterisis adeias";
        else
            cout << "Enas xronos sterisis adeias" ;
    }
    else
        if(k==1)
            cout << "Enas xronos sterisis adeias";
    else
        cout << "Nomotagis odigos";
   return 0;
}

