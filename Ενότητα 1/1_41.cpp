#include <iostream>
#define n 100
using namespace std;
int main ()
{
    float pin[n],mx=-100000;
    string name[n],mxname;
    for (int i=0;i<n;i++){
    cout << "Star name: ";
        cin >>name[i];
    cout << "Brightness(-10...+10): ";
        cin >> pin[i];
        while(pin[i]<-10 || pin[i]>10)
        {
            cout << "Wrong input, give again brightness: " ;
            cin >> pin[i];
        }
        if (pin[i]>mx)
        {
            mx=pin[i];
        }
    }
    cout << endl << "Max brightness for stars: " << endl;
    for(int i=0;i<n;i++)
        if(pin[i]==mx)
            cout << name[i] << endl;

    return 0;
}
