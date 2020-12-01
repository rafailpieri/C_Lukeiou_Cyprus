#include <iostream>
using namespace std;

void fill(int arr[][5])
{
    for(int i=0;i<6;i++)
        for(int j=0;j<5;j++)
         cin >> arr[i][j];
}
int find_min_row (int arr[][5], int i)
{
    int min=arr[i][0];
    for(int j=1;j<5;j++)
        if(arr[i][j]<min)
        min=arr[i][j];
    return min;
}
int main ()
{
    int arr[6][5];
    fill(arr);
    int n;
    cin >> n;
    cout << find_min_row(arr,n);
}
