#include <iostream>
#define n 4
using namespace std;
void fill_array(int arr[][n])
{
    for(int i=0;i<3;i++)
        for(int j=0;j<n;j++)
        cin >> arr[i][j];
}
void print_array(int arr[][n])
{
    for(int i=0;i<3;i++){
        for(int j=0;j<n;j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}
int main ()
{
    int pin[3][4];
    fill_array(pin);
    print_array(pin);
    return 0;
}
