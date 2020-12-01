#include <iostream>
using namespace std;
int main ()
{
    int n,seira=0,total=0;
    cin >> n;//max poso
    do{
        seira++;
        total=total+50+(seira-1)*6;//upologismos olwn kathismatwn 50 + 56 +62 ...
    }while(total*40<=n); // elegxos an i teleutaia seira iperevike to orio
    total=total-(50+(seira-1)*6); //afairoume kathismata telutaias seiras
    cout << seira-1 << endl << total << endl << n-total*40;
    return 0;
}
