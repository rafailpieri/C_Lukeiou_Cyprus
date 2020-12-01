#include <iostream>
#include <iomanip>
using namespace std;
int  main ()
{
    int arr[10][10];
    for(int i=0;i<100;i++)
        arr[i/10][i%10]=i+1;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++)
        cout << setw(4) <<  arr[i][j] ;
    cout << endl;
}
return 0;
}
