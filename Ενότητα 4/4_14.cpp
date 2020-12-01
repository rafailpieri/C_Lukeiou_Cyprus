#include <iostream>
using namespace std;

int power(int x, int y) {
    int res=1;
    for (int i=0;i<y;i++)
        res=res*x;
    return res;
}

int main() {
    int n,k;
    cin >> n >> k;
    cout << power(n,k);

    return 0;
}
