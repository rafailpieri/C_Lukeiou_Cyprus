#include <string>
#include <iomanip>
#include <iostream>
using namespace std;
int main ()
{
    string s;
    cin >> s;
    char last_char=s[s.size()-1];
    for (int i=s.size()-1;i>0;i--)
        s[i]=s[i]-1;
    s[0]=last_char;
    cout << s << endl;
    return 0;
}


