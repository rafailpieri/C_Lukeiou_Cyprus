#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
  cin >> s;
  for (int i=0;i<s.size();i++)
  {
    if (s[i]=='a')
    {
      s[i]='b';
    }
  }
  cout << s;
    return 0;
}
