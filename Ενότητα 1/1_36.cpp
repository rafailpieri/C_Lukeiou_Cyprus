#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int n,i=0,maxddk=0,boys=0,girls=0,stasimoi=0,total_adik=0;
    cout << "Plithos mathitwn: ";
    cin >> n;
    char fulo[n];
    string onoma[n],s;
    int dik[n],adik[n],ddk[n];
    while(i<n && onoma[i]!="end")
    {
        cout << "Onoma mathiti: ";
        cin >> onoma[i];
        if (onoma[i]!="end"){
        cout << "Dwse fulo: ";
        cin >> fulo[i];
        while(fulo[i]!='A' && fulo[i]!='K')
        {
            cout << "Dwse xana fulo: ";
            cin >> fulo[i];
        }
        cout << "Dikeologimenes: ";
        cin >> dik[i];
        cout << "Adikeologites: ";
        cin >> adik[i];
        cout << "DDK: ";
        cin >> ddk[i];
        if(ddk[i]>=maxddk)
        {
            maxddk=ddk[i];
            s=onoma[i];
        }
        i++;
        }
    }
    cout << endl;
    for (int j=0;j<i;j++){
        cout << onoma[j] << "-->" << dik[j]+adik[j]+ddk[j] << endl ;
        if(fulo[j]=='A' && adik[j]>=40 && adik[j]<=50)
            boys++;
        if(fulo[j]=='K' && adik[j]>=40 && adik[j]<=50)
            girls++;
        if (adik[j]>50 || (dik[j]+adik[j]>160))
            stasimoi++;
        total_adik=total_adik+adik[j];
    }
    cout << "Perissoteres DDK apousies: " << s << endl;
    cout << "Agoria metaxu 40 kai 50 adikeologitwn: " << boys << endl;
    cout << "Koristsia metaxu 40 kai 50 adikeologitwn:  "<<girls << endl;
    cout << "Stasimoi: " << stasimoi << endl;
    cout << "Mesos oros adikeologitwn: " << fixed << setprecision(2) << (float)total_adik/i;

    return 0;
}
