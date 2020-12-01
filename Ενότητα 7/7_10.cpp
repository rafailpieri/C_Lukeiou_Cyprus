#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int arr1[100],arr[10][10];
    for (int i=0;i<100;i++)
        arr1[i]=i+101;
    for(int i=0;i<100;i++)
        arr[i/10][i%10]=arr1[i];
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++)
        cout << setw(4) <<  arr[i][j] ;
    cout << endl;
}
    return 0;
}
