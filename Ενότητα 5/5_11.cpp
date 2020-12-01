#include <iostream>
using namespace std;
int search(char pin[],int n, char t)
{
    int cnt=0;
    for (int i=0;i<n;i++)
        if(pin[i]==t)
            cnt++;
    int ARR[cnt],j=0;
    for (int i=0;i<n;i++){
        if(pin[i]==t){
            ARR[j]=i;
            j++;
        }
     }
     int ans=0,counter1=1;
     for (int i=0;i<cnt-1;i++)
     {
         if (ARR[i]+1==ARR[i+1])
            counter1++;
         else{
             if (counter1==2)
                ans++;
            counter1=1;
         }
     }
     if(counter1==2)
        ans++;
     return ans;
}
int main ()
{
    int n;
    cin >> n;
    char pin1[n],c;
    for (int i=0;i<n;i++)
        cin >> pin1[i];
    cout << "Stoixeio: " ;
    cin >> c;
    cout << search(pin1,n,c);
    return 0;
}
