#include <iostream>
#define n 30
using namespace std;
int main ()
{
    int b=0;
    char pin[n];
    for(int i=0;i<n;i++){
        cin >> pin[i];
        while(pin[i]!='A'&& pin[i]!='B' && pin[i]!='C'){
            cout << "Xana gramma (A,B,C) : ";
            cin >> pin[i];
        }
        if (pin[i]=='B')
            b++;
        if(pin[i]=='C')
            pin[i]='D';
    }
    cout << "Plithos 'B' : "<< b << endl;
    for (int i=0;i<n;i++)
        cout << pin[i] << endl;


    return 0;
}
