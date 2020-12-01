#include <string>
#include <iomanip>
#include <iostream>
using namespace std;
int main ()
{
    string s;
    cin >> s;
    for (int i=0;i<s.size();i++)
        for (int j=0;j<=i;j++)
    {
        cout << s[i];
    }
    return 0;
}


