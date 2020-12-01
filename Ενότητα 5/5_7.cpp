#include <iostream>
using namespace std;
int search (char arr [],int n,char c)
{
    int pos=-1;
    for (int i=0;i<n;i++)
        if (arr[i]==c)
            pos=i;
    return pos;
}
int main ()
{
    int n;
    cin >> n;
    char pin[n],C;
    for (int i=0;i<n;i++)
        cin >> pin[i];
    cout << "Xaraktiras gia anazitish: ";
    cin >> C;
    cout << search(pin,n,C);
    return 0;
}
