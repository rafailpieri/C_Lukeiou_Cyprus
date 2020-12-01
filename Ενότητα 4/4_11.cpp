#include <iostream>
#include <iomanip>
using namespace std;

float prod(float a, float b) {
    return a*b;
}

int main() {
    float a,b;
    cin >> a >> b;
    cout << fixed << setprecision(2) << prod(a,b);
    return 0;
}
