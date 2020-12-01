#include <iostream>
#define n 10
using namespace std;
int main ()
{
    float pin[n],maxh=0;
    string names[n];
    for(int i=0;i<n;i++){
        cout << "Atomo " << i+1 << ":" ;
        cin >> names [i];
        cout << "Height: ";
        cin >> pin[i];
        while (pin[i]<1.4 || pin[i]>2.3)
        {
            cout << "Wrong input of height, try again: ";
            cin >> pin[i];
        }
    if (pin[i]>maxh)
        maxh=pin[i];
    }
    cout << endl;
    for (int i=0;i<n;i++)
        if(pin[i]==maxh)
        cout << names[i] << endl;
    return 0;
}
