#include <iostream>
#include <string>
using namespace std;
void pallindrome(string s1)
{
    bool pall=true;
    int pos=s1.size()-1;
    for (int i=0;i<(s1.size())/2;i++,pos--)
        if(s1[i]!=s1[pos])
            pall=false;
    if(pall==true)
        cout << "true";
    else
        cout << "false";
}
int main ()
{
    string s;
    cin >> s;
    pallindrome(s);
}
