#include <string>
#include <iostream>
using namespace std;
int main ()
{
    string s;
    cin >> s;
    for (int i=0;i<s.size();i++)
        if(s[i]<'Y')
        cout << char(s[i]+2);
    else
        cout << char(s[i]-24);

    return 0;
}
