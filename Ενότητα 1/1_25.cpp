#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;


int main() {
  double n;
  cin >> n;
  if (n<=800)
  {
    cout << fixed << setprecision(2) << n*0.02 << endl;
    cout << fixed << setprecision(2) << n*0.025 << endl;
    cout << fixed << setprecision(2) <<n*0.955;
  }
  else
  {
    if(n>1200)
    {
      cout << fixed << setprecision(2) << n*0.03 << endl;
      cout << fixed << setprecision(2) << n*0.04 << endl;
      cout << fixed << setprecision(2) <<n*0.93;
    }else{
    cout << fixed << setprecision(2) << n*0.025 << endl;
      cout << fixed << setprecision(2) << n*0.03 << endl;
      cout << fixed << setprecision(2) <<n*0.945;

  }
  }
    return 0;
}
