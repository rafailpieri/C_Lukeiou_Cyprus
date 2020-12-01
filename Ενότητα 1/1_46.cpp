#include <iostream>
#define n 10
using namespace std;
int main ()
{
    int Nums[n],thetikoi=0,arnitikoi=0,miden=0,Filter[n];
    for (int i=0;i<n;i++)
    {
        cin >> Nums[i];
        if(Nums[i]==0)
            miden++;
        if(Nums[i]>0)
            thetikoi++;
        if(Nums[i]<0)
            arnitikoi++;
        if(Nums[i]>0 && Nums[i]%3!=0)
            Filter[i]=0;
        else
            Filter[i]=1;
    }
    cout << "Arnitikoi: " << arnitikoi << endl << "Miden: " << miden <<  endl << "Thetikoi: " << thetikoi << endl ;
    cout << "Nums:" << endl;
    for (int i=0;i<n;i++)
        cout << Nums[i] << endl;
    cout << "Filter: " << endl;
    for (int i=0;i<n;i++)
        cout << Filter[i] << endl;

    return 0;
}
