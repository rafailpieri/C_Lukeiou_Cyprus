#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    int z1[n],z2[n],tot[n];
    for (int i=0;i<n;i++)
    {
        cin >> z1[i] >> z2[i];
        tot[i]=z1[i]+z2[i];
    }
    int res=0,cnt=0;
    for(int i=0;i<n;i++)
    if(tot[i]!=7){
        cnt=0;
    }else
    {
        cnt++;
        if (res<cnt)
            res=cnt;
    }
    cout << res;
    return 0;
}
