#include <iostream>
using namespace std;
int main ()
{
    int N;
    cin >> N;
    int X=1,Y=0;
    do{
        X=X*N;
        Y++;
    }while(X<1000);
    cout << Y << endl;
    return 0;
}
