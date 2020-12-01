#include <string>
#include <iomanip>
#include <iostream>
using namespace std;
int main ()
{
    string s1,s2;
    cin >> s1 >> s2;
    for (int i=0;i<3;i++)
        cout << s1[i];
    for(int i=s2.size()-3;i<s2.size();i++)
        cout << s2[i];
    return 0;
}

