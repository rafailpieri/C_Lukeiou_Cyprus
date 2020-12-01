#include <iostream>
#define n 4
using namespace std;
int fill_array(int arr[][n])
{
    for(int i=0;i<3;i++)
        for(int j=0;j<n;j++)
        cin >> arr[i][j];
}
int main ()
{
    int pin[3][4];
    fill_array(pin);
    return 0;
}
