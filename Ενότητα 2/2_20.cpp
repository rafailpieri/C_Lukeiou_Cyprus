#include <iostream>
#include <string>
using namespace std;
int main (){
    string s;
    cin >> s;
    int emf[s.size()-1]={};
    char arr[s.size()-1][2]={};
    for (int i=0;i<s.size()-1;i++){
        arr[i][0]=s[i];
        arr[i][1]=s[i+1];
        for(int j=0;j<s.size()-1;j++){
            if(arr[i][0]==s[j] && arr[i][1]==s[j+1])
            emf[i]++;
        }
    }
    for (int i=0;i<s.size()-1;i++){
        bool temp=true;
        for(int j=0;j<i;j++)
            if(arr[i][0]==arr[j][0] && arr[i][1]==arr[j][1])
                temp=false;
        if(temp)
            cout << arr[i][0] << arr[i][1] << ":" << emf[i] << endl;
    }
    return 0;
}
