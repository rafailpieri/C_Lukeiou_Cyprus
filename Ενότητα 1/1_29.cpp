#include <iostream>
using namespace std;
int main ()
{
    int x,sum=0,i=1,num;
    cin >> x;
    for(i;i<=x;i++)
    {
        cin >> num;
        sum += num;
    }
    cout << sum;
    return 0;
}
