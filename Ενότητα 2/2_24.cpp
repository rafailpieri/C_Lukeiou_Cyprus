#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;
void fun(string& s, int a, int b)
{
    int pos=0,temp=a,temp_2=b;
    char s2[s.size()];
    for (a;a>=0;a--)
    {
        s2[pos]=s[a];
        pos++;
    }
    for (b;b>temp;b--)
    {
        s2[pos]=s[b];
        pos++;
    }
    for (int l=s.size()-1;l>temp_2;l--)
    {
        s2[pos]=s[l];
        pos++;
    }
  for (int i=0;i<pos;i++)
        s[i]=s2[i];
}

int main ()
{
    string arr,min_arr;
    cin >> arr;
    min_arr=arr;
    int n=arr.size();
    for (int i=0;i<n-2;i++)
        for (int j=i+1;j<n-1;j++)
    {
        string temp=arr;
        fun(temp,i,j);
        if (temp<min_arr)
            min_arr=temp;
    }
    cout << min_arr;
    return 0;
}
