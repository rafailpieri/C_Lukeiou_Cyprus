#include <iostream>
using namespace std;

string perfect (int n) {
  int total=0;
    for (int i=1;i<n;i++)
        if(n%i==0)
            total=total+i;
    if(total==n)
        return "perfect";
    else
        return "not perfect";
}

int main() {
    int n;
    cin >> n;
    cout << perfect(n);
    return 0;
}
