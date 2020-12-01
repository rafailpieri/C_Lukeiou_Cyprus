#include <iostream>
using namespace std;
int main ()
{
    int a,b,mkd;
    cin >> a >> b;
    mkd=b;
    while(!(b%mkd==0&&a%mkd==0))
        mkd--;
    cout << mkd;
    return 0;
}
