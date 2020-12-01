#include <iostream>
#include <fstream>
#define N 100
#define NN 1000000
using namespace std;
int emfaniseis(int pin[],int t,int pos)
{
    int cnt=0;
    for (int i=0;i<N;i++)
        if (pin[i]==t && pos!=i)
        cnt++;
    return cnt;
}
int main()
{
    int arr[N],emf[N];
    ifstream fin ("inA.txt");
    for (int i=0;i<N;i++){
        fin >> arr[i];
        emf[i]=0;
    }
    fin.close();
    for (int i=0;i<N;i++)
        emf[i]=emfaniseis(arr,arr[i],i);
    int max_emfaniseis=0,max_pos;
    for (int i=0;i<N;i++){
        if (emf[i]>max_emfaniseis)
    {
        max_emfaniseis=emf[i];
        max_pos=i;
    }
    }
    int max=arr[max_pos];
    long long arr2[NN],cnt=0;
    ifstream fin2 ("inB.txt");
    for(long long i=0;i<NN;i++)
    {
        fin2 >> arr2[i];
        if (arr2[i]==max)
            cnt++;
    }
    cout << "Plithos " << max << " = ";
    cout << cnt << endl;
    return 0;
}
