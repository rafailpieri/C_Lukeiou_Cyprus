#include <fstream>
#include <iostream>
using namespace std;
bool search(int arr[] , int N, int target)
{
    for (int i=0;i<N;i++)
        if (arr[i]==target)
            return true;
    return false;
}
int main ()
{
    ifstream fin ("askisi5_8.txt");
    int N;
    fin >> N;
    int pin[N];
    for (int i=0;i<N;i++)
        fin >> pin[i];
    fin.close();
    cout << "Dwse arithmo gia anazitish: ";
    int a;
    cin >> a;
    if (search(pin,N,a))
        cout << "found" << endl;
    else
        cout << "not found" << endl;
    return 0;
}
