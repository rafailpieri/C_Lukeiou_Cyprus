#include <iostream>
using namespace std;
void search(int arr[],int n,int x1, int x2)
{
    bool fx1=false,fx2=false;
    for (int i=0;i<n;i++)
    {
        if(arr[i]==x1)
            fx1=true;
        if(arr[i]==x2)
            fx2=true;
    }
    if (fx1==fx2 && fx1==true)
        cout << "both items found" << endl;
    if(fx1==fx2 && fx1==false)
        cout << -1;
    if (fx1==true && fx2==false)
        cout << "Item " << x1 << " was found" << endl;
    if (fx2==true && fx1==false)
        cout << "Item " << x2 << " was found" << endl;
}
int main ()
{
    int N;
    cin >> N;
    int pin[N];
    for(int i=0;i<N;i++)
        cin >> pin[i];
    int a,b;
    cout << "Dwse dio arithmous:";
    cin >> a >> b;
    search(pin,N,a,b);
    return 0;
}
