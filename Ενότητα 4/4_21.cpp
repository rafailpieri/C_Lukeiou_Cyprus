#include <iostream>
#include <string>
using namespace std;

void reverseString(string st) {
    for (int i=st.size()-1;i>=0;i--)
        cout << st[i];
    cout << endl;
}

int main() {
    string arr[5];
    for (int i=0;i<5;i++)
        cin >> arr[i];
    for (int i=0;i<5;i++)
        reverseString(arr[i]);
    return 0;
}
