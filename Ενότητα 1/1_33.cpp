#include <iostream>
using namespace std;
int main ()
{
    int meres=5;
    int in,out,extra=0,current=0;
    while(meres--)
    {
        cout << "Eisroh: ";
        cin >> in;
        cout << "Ekroh: ";
        cin >> out;
        if (current+in<=400)
            current=current+in-out;
            else
            {
                extra=extra+(current+in-400);
                current = 400-out;
            }
    }
    cout << "Total inside: " << current << endl << "Extra: " << extra << endl;
    return 0;
}
