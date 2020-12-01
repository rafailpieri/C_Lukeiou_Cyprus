#include <string>
#include <iomanip>
#include <iostream>
using namespace std;
int main ()
{
    string s;
    char c;
    bool exit=false;
    cin >> s >> c;
    for (int i=0;i<s.size() && exit==false;i++)
        if (s[i]==c)
    {
        cout << i;
        exit=true;
    }
    if (exit!=true)
    cout << -1;
    return 0;
}

