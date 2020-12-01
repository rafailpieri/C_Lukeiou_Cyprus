#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
   char c;
   float a,b;
   cin >> a >> b >> c;
   if (c=='+')
    cout << fixed << setprecision(2) << a+b;
   if (c=='-')
    cout << fixed << setprecision(2) << a-b;
   if (c=='*')
    cout << fixed << setprecision(2) << a*b;
   if (c=='/'){
        if(b==0)
        cout << "Error";
   else
    cout << fixed << setprecision(2) << a/b;
   }

    return 0;
}

