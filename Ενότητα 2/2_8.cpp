#include <string>
#include <iomanip>
#include <iostream>
using namespace std;
int main ()
{
    int metritis=0;
    string name;
    cin >> name;
    while (name!="STOP")
    {
        if (name[name.size()-1]=='S'&&name[0]=='N')
            metritis++;
        cin >> name;
    }
    cout << metritis;
    return 0;
}

