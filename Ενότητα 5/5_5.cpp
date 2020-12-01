#include <iostream>
using namespace std;
int search(float arr[] , int N, float target)
{
    for (int i=0;i<N;i++)
        if (arr[i]==target)
            return i;
    return -1;
}
int main ()
{
    int n;
    cout << "Plithos stoixeiwn ";
    cin >> n;
    float pin[n],T;
    cout << "Stoixeia: " << endl;
    for (int i=0;i<n;i++)
        cin >> pin[i];
    cout << "Dwse arithmo: ";
    cin >> T;
    cout << search(pin,n,T);
    return 0;
}
