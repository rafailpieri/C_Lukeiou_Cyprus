#include <iostream>
using namespace std;
int main ()
{
    int N,sum1=0,sum2=0;
    cin >> N;
    int arr[N][N];
    for(int i=0;i<N*N;i++)
        cin >> arr[i/N][i%N];
    for(int i=0;i<N;i++){
        sum1+=arr[i][i];
        sum2+=arr[N-i-1][i];
    }
    cout << sum1 << " " << sum2 << endl;
    return 0;
}
