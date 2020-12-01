#include <iostream>
using namespace std;

void triangle (int n, char c) {
  for (int i=1;i<=n;i++){
    for (int j=0;j<i;j++){
        cout << c;
    }
    cout << endl;
  }
}

int main() {
    int n;
    char c;
    cin >> n >> c;
    triangle(n,c);
    return 0;
}
