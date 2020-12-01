#include <iostream>
using namespace std;

int mod(int a, int b) {
   if (a>b)
       return a%b;
    else
        return b%a;
}


int main() {
    int a,b;
    cin >> a >> b;
    cout << mod(a,b);
    return 0;
}
