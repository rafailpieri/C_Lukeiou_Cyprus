#include <iostream>
using namespace std;
int main ()
{
    int n,m;
    cin >> n >> m;
    char pin[n][m];
    for(int i=0;i<n*m;i++)
        cin >> pin[i/m][i%n];
    for(int i=0;i<n*m;i++){
        if(pin[i/m][i%n]=='X')
            cout << "(" << i/m << "," << i%n << ")" << endl;
    }
    return 0;
}
