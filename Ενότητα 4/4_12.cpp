#include <iostream>

using namespace std;

 bool caps (char letter){
   return int(letter)>=65 && int(letter)<=97;
 }

int main() {
    char c;
    cin >> c;
    cout << caps(c);
    return 0;
}
