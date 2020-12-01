#include <iostream>
#include <fstream>
#include <string>
using namespace std;
bool search(string name){
    ifstream fin ("names.txt");
    string s;
    while (!fin.eof())
    {
        fin >> s;
        if (s==name)
            return true;
    }
    return false;
}
int main ()
{
    string S;
    cin >> S;
    if (search(S))
        cout << "found";
    else
        cout << "not found";
    return 0;
}
