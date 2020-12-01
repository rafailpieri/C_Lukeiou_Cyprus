#include <iostream>
using namespace std;
int main ()
{
    char pin[10];
    for (int i=0;i<10;i++)
        cin >> pin[i];

    for (char a='A';a<='Z';a++){
            int cnt=0;
        for (int i=0;i<10;i++)
    {
        if (pin[i]==a)
        cnt++;
    }
    if (cnt>0)
        cout << a << ":" << cnt << endl;
    }

    return 0;
}
