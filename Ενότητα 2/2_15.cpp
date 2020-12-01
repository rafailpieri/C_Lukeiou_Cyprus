#include <iostream>
#include <string>
using namespace std;
int main() {
    string s,s1;
    getline(cin,s);
    cin >> s1;
    int cnt=0;
    for (int i=0;i<s.size();i++)
    {
        bool temp=true;
        for (int j=i,k=0;k<s1.size();j++,k++)
            if (s1[k]!=s[j])
                temp=false;
        if(temp==true)
            cnt++;
    }
    cout << cnt;
    return 0;
}

