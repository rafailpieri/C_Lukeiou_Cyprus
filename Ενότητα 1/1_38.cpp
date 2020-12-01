#include <iostream>
using namespace std;
int main ()
{
    int n,meli=0;
    cin >> n;
    int pin[n];
    for(int i=0;i<n;i++)
        cin >> pin[i];
    for (int i=0;i<n-1;i++)
        if(pin[i]==0)
        meli=meli+pin[i+1];
    cout << meli;
    return 0;
}
