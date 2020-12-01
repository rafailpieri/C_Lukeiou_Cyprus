#include <iostream>
using namespace std;
int pontoi (int a, int b,int c)
{
    if(a==b&&b==c&&c==6)
        return 50;
    else
    {
        if(a==b&&b==c)
            return 30;
        else
        {
            if (a==b || b==c || c==a)
                return 20;
            else
                return a+b+c;
        }
    }
}
int main ()
{
    int x1,x2,x3,z1,z2,z3;
    cin >> x1 >> x2 >> x3 >> z1 >> z2 >> z3;
    if (pontoi(x1,x2,x3)>pontoi(z1,z2,z3))
    {
        cout << pontoi(x1,x2,x3);
    }
        else
            cout << pontoi(z1,z2,z3);

            return 0;
}
