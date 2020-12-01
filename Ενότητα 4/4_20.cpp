#include <iostream>
using namespace std;

bool search (int arr[]){
    bool temp=true;
    for (int i=0;i<5;i++)
        if (arr[i]<0)
            temp=false;
    return temp;
}

int main() {
    int arr[5];
    for (int i=0;i<5;i++)
        cin >> arr[i];
    cout << search(arr);
    return 0;
}
