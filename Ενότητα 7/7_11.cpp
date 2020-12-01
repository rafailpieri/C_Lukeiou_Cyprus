#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int arr1[10][10],arr2[100];
    for(int i=0;i<100;i++)
    {
        arr1[i/10][i%10]=200-i;
        arr2[i]=arr1[i/10][i%10];
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++)
        cout << setw(4) <<  arr1[i][j] ;
    cout << endl;
}
    return 0;
}
