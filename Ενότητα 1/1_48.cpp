#include <string>
#include <iostream>
using namespace std;


int main() {
    int tests;
  cin >> tests;
  while (tests--)
  {
    long long int n;
    cin >> n;
    int cnt=0;
    while(n>0)
    {
      if (n%2==0)
      {
        n=n/2;
      }
      else
      {
        n=n-1;
        cnt++;
      }
    }
    cout << cnt << endl;
  }
    return 0;
}
