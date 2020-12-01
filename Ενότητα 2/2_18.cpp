#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string s,s1;
    cin >> s1 >> s;
    int  cnt=0,pin[s1.size()]={};
    for (int i=0;i<s.size();i++)
        if(s[i]==s1[cnt]){
            pin[cnt]=i;
            cnt++;
        }
    if(cnt==s1.size()){
        for(int i=0;i<s1.size();i++)
          cout << pin[i] << " ";
    }
    else
        cout << -1;



    return 0;
}
