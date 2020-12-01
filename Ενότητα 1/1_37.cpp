#include <iostream>
using namespace std;
int main ()
{
    int pin[10],metritis=0;
    for(int i=0;i<10;i++)
        cin >> pin[i];
    for(int i=0;i<9;i++)
    {
        if(pin[i]>pin[9])
            metritis++;
    }
    cout << metritis << endl;
    return 0;
}
