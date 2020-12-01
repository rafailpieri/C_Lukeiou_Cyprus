#include <iostream>
#include <fstream>
#include <string>
using namespace std;
string arr[1000];
bool search(string name){
    ifstream fin ("names.txt");
    int i=0;
    while (!fin.eof())
    {
        fin >> arr[i];
        i++;
    }
    fin.close();
    int first=0,last=i,mid;
    while(first<=last)
    {
        mid=first+last/2;
        if(name==arr[mid])
            return true;
        else
            if (name<arr[mid])
            last=mid-1;
        else
            first=mid+1;
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

