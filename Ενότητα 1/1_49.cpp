#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool checkPrime(int n)
{
    int i;
    bool isPrime = true;

    for(i = 2; i <= n/2; ++i)
    {
        if(n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    return isPrime;
}

int main() {
    int n;
  cin >>n;
  int pin[n];
  bool primes[n],exit=false;
  for (int i=0;i<n;i++)
  {
    cin >> pin[i];
    primes[i]=checkPrime(pin[i]);
  }
  for (int i=1;i<n-1;i++)
  {
      exit=false;
    for (int j=1;i-j>=0&&i+j<n;j++)
    {
      if (primes[i-j]==true && primes[i+j]==true&&exit==false)
      {
        cout << pin[i] << endl;
        exit=true;
      }
    }
  }

    return 0;
}
