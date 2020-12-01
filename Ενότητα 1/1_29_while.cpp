#include <iostream>
using namespace std;
int main ()
{
    int x,sum=0,i=1,num;
    cin >> x;
    while(i<=x)
    {
        cin >> num;
        sum += num;
        i++;
    }
    cout << sum;
    return 0;
}

