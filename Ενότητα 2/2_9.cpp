#include <string>
#include <iomanip>
#include <iostream>
using namespace std;
int main ()
{
    int i=0,num=0;
    string s;
    cin >> s;
    char pin[26];
    int emfaniseis[26];
    for (char c='a';c<='z';c++){
        pin[i]=c;
        emfaniseis[i]=0;
        i++;
    }
    for (i=0;i<s.size();i++)
        for (int j=0;j<26;j++){
            if(s[i]==pin[j])
                emfaniseis[j]++;
    }
    for (i=0;i<26;i++)
        if(emfaniseis[i]>num)
        num=emfaniseis[i];
    bool exit=false;
    for (i=0;i<26&&exit==false;i++)
        if (emfaniseis[i]==num){
        cout << pin[i] << endl;
        exit = true;
        }
    return 0;
}


