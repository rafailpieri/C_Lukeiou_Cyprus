#include <iostream>
using namespace std;

bool checkPrime(int n)
{
    bool isPrime = true;
    for(int i = 2; i < n/2; i++){
        if(n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}


int main() {
    int k;
    cin >> k;
    if (k==1)
        cout << 0;
    else
    cout << checkPrime(k);
    return 0;
}
