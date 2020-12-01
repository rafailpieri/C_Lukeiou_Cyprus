#include <iostream>
using namespace std;
int main ()
{
    int a,b,c;
    cin >> a >> b >> c;
    if ( (a==1&&b==1)||(a==0&&b==0))
    {
        cout << "manometer" << " ";
        if (c==0)
            cout << "thermometer";
    }
    else{
        if (c==0)
            cout << "thermometer";
            else
                cout << "OK" ;
}
return 0;
}
