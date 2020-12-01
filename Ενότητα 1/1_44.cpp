#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    int pin[n],mn=10000000,mx=-10000000;
    for (int i=0;i<n;i++)
    {
        cin >> pin[i];
        if(pin[i]<mn)
            mn=pin[i];
        if(pin[i]>mx)
            mx=pin[i];
    }
    for(int i=0;i<n;i++)
        if (pin[i]==mn)
            cout << i << " ";
    cout << endl;
    for(int i=0;i<n;i++)
        if (pin[i]==mx)
            cout <<i<<" ";

    return 0;
}
