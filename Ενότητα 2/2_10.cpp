#include <string>
#include <iomanip>
#include <iostream>
using namespace std;
int main ()
{
    string s;
    cin >> s;
    bool arr[s.size()];
    for (int i=0;i<s.size();i++)
        arr[i]=false;
    for (int i=0;i<s.size()-1;i++)
        if (s[i]=='(')
    {

        bool exit=false;
        for(int j=i+1;j<s.size() && exit==false;j++){
            if(s[j]==')' &&arr[j]==false ){
                arr[j]=true;
                exit=true;
                arr[i]=true;
            }
        }
    }
    bool exit=false;
    for (int i=0;i<s.size()&&exit==false;i++)
        if (s[i]==')' || s[i]=='('){
            if(arr[i]==false){
            cout << "false";
            exit=true;
            }
        }
        if(exit==false)
            cout << "True";

    return 0;
}
