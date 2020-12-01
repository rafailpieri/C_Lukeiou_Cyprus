#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
  int tests;
  cin >> tests;
  while (tests--)
  {
    int n,cnt=0;
    cin >> n;
    for (int i=0;i*i<=n;i++)
    {
      for (int j=i;j*j+i*i<=n;j++)
      {
        if (j*j+i*i==n)
        {
          cnt++;
        }
      }
    }
    cout << cnt << endl;
  }

   return 0;
}

