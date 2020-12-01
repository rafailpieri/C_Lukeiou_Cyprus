#include <iostream>
#define n 10
using namespace std;
int main ()
{
    string names[n];
    float B1[n],B2[n],total[n],mx=0,overall=0;
    for (int i=0;i<n;i++)
    {
        cout << "Name: ";
        cin >> names[i];
        cout << "B1: ";
        cin >> B1[i];
        while(B1[i]<1 || B1[i]>10)
        {
            cout << "Lathos vathmologia ,dwse xana B1: ";
            cin >> B1[i];
        }
        cout << "B2: ";
        cin >> B2[i];
        while(B2[i]<1 || B2[i]>10)
        {
            cout << "Lathos vathmologia ,dwse xana B1: ";
            cin >> B2[i];
        }
        total[i]=(B2[i]+B1[i])/2.0;
        if (total[i]>mx)
            mx=total[i];
        overall=overall+total[i];
    }
    int cnt=0;
    cout << "Winner(s): " << endl;
    for (int i=0;i<n;i++)
    {
        if(total[i]==mx)
            cout << names[i] << endl;
        if(total[i]>overall/10.0)
            cnt++;
    }
    cout << "Over average: " << cnt << endl;
    return 0;
}
