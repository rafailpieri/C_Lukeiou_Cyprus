#include <string>
#include <iostream>
using namespace std;
bool check(string s,char c)
{
    bool temp2=false;
    for (int i=0;i<s.size();i++)
        if (s[i]==c)
            temp2=true;
    return temp2;
}
int main() {
    int n;
    cin >> n;
    string arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    int cnt[26]={};
    int ans=0;
    for (char c='a';c<='z';c++)
    {
        bool temp=true;
        for (int i=0;i<n;i++)
           if(check(arr[i],c)!=true)
               temp=false;
        if(temp==true)
            ans++;
    }
    cout << ans;
    return 0;
}
