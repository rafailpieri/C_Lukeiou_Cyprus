#include <iostream>
#include <string>
#define n 18
using namespace std;
int cnt[26];
int main ()
{
    string s[n];
    for (int i=0;i<n;i++){
        cin >> s[i];
        cnt[s[i][0]-'A']++;
    }
    int maxt=0,pos=0;
    for(int i=0;i<n;i++)
    if(cnt[s[i][0]-'A']>maxt)
        maxt=cnt[s[i][0]-'A'];
    for (int i=0;i<n;i++)
    if(cnt[s[i][0]-'A']==maxt)
        cout << s[i] << endl;
    return 0;
}
