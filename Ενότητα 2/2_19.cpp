#include <string>
#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    int cnt=1;
    for (int i=1;i<s.size();i++)
        if ((int)s[i]>=65 && (int)s[i]<=90)
            cnt++;
    cout <<cnt;
    return 0;
}
