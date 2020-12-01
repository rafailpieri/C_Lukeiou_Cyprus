#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string s;
    cin >> s;
    int total=s.size(),apousies=0;
    for (int i=0;i<s.size();i++)
        if (s[i]=='P')
            apousies++;
    if (double(apousies)/double(total)>0.25)
        cout << "FAIL";
    else
        cout << "PASS";
    return 0;
}
