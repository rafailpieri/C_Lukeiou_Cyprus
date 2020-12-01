#include <iomanip>
#include <iostream>
using namespace std;
int main ()
{
    int total=0,cy=0,eggrafes=0;
    float max1=0,max2=0,mo=0;
    string first,second;
    string s;
    while( s!="AAAAA")
    {
        float asfalia;
        int n;
        cout << "Code: ";
        cin >> s;
        if (s!="AAAAA"){
        eggrafes++;
        cout << "Poso asfalias: ";
        cin >> asfalia;
        cout << "Xwritikotita: ";
        cin >> n;
        total=total+n;
        if (asfalia>max1)
        {
            max2=max1;
            second=first;
            max1=asfalia;
            first=s;
        }else
        {
            if(asfalia>max2)
            {
                max2=asfalia;
                second=s;
            }
        }
        mo=mo+asfalia;
        if(s[0]=='5'&&s[1]=='B')
            cy++;
        }
    }
    cout << endl << "---------------------" << endl;
    cout << "Sinolo epivatwn: " << total << endl;//a
    cout << "Code 1st: " << first << endl << "Code 2nd: " << second << endl;//b
    cout << "Mesos oros asfaleiwn: " << fixed << setprecision(2) << mo/eggrafes << endl;//c
    cout << "Kipriaka aeroskafi: " << cy << endl;
    return 0;
}
