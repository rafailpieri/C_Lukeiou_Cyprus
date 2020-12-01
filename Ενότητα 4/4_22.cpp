#include <iostream>
#include <string>
using namespace std;


int search (string st, char ch){
  int cnt=0;
    for (int i=0;i<st.size();i++)
        if (st[i]==ch)
            cnt++;
    return cnt;
}

int main() {
    string s;
    char c;
    cin >> s >> c;
    cout << search(s,c);
return 0;
}
