#include <string>
#include <iomanip>
#include <iostream>
using namespace std;
int main ()
{
    int num=0,names=10;
    string max_name;
    while (names--)
    {
        string s;
        cin >> s;
        if (s.size()>num)
        {
            num = s.size();
            max_name=s;
        }
    }
    cout << max_name;
    return 0;
}
