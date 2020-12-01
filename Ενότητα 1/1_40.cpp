#include <iostream>
#define n 3
using namespace std;
bool ariks (int a)
{
 int aristera,dexia=a%10,total=0;
 while (a>0)
 {
  total=total+a%10;
  a=a/10;
  if (a<10 && a>0)
    aristera=a;
 }

 if(total-aristera-dexia==(dexia+aristera))
    return true;
 else
    return false;
}

int main ()
{
    int pin[n];
    bool pin2[n];
    for(int i=0;i<n;i++){
        cin >> pin[i];
        pin2[i]=ariks(pin[i]);
    }
    cout << endl;
    for (int i=0;i<n;i++)
        cout << pin[i] << " " << pin2[i] << endl;
    return 0;
}

