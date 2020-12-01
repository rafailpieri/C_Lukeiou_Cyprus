#include <iostream>
using namespace std;

void pyramid (int h){
    int temp=h*2+1;
    int i=0;
    for (int j=1;j<=h;j++)
    {
        for (int k=0;k<temp;k++){
            if (k>=(h-1)-i && k<=(h-1)+i)
                cout << "*";
            else
                cout << " ";
    }
        cout << endl;
        i++;
    }
}

int main() {
    int n;
    cin >> n;
    pyramid(n);
    return 0;
}
