#include <iostream>
#include <string>
using namespace std;
int main() {
    string a;
    cin >> a;
    int count=1;
    for (int i=0;i<=a.size();i++){
        if (a[i]==a[i+1])
            count=count+1;
        else{
            if(count >1){
            cout << count << a[i];
            count =1;
            }
            else
                cout << a[i];
        }
    }

    return 0;
}

