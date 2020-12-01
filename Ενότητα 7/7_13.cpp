#include <iostream>
using namespace std;
int main ()
{
    int arr[4][4],maxR[4];
    for(int i=0;i<16;i++)
        cin >> arr[i/4][i%4];
    for(int i=0;i<4;i++)
    {
        maxR[i]=arr[i][0];
        for(int j=1;j<4;j++)
            if(maxR[i]<arr[i][j])
            maxR[i]=arr[i][j];
    }
    int cnt=0;
    bool flag = true;
    for(int i=0;i<4;i++)
    {
        flag=true;
        for(int j=0;j<4;j++)
            if(arr[i][j]<0)
             flag=false;

        if (flag)
            cnt++;
    }
    for (int i=0;i<4;i++)
        cout << "-> Max from row " << i+1 << ": " << maxR[i] << endl;
    cout << endl << cnt << " Only Positive";
    return 0;
}
