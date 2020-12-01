#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int a,b,c,d;
  cin >> a >> b >> c >>d;
  double e=double(b)/a,f=double(d)/c;
  if(e>f)
    cout << 'T';
  else
    cout <<'R';
    return 0;
}
