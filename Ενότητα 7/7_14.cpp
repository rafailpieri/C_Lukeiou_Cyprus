#include <iostream>
using namespace std;
bool check(int sdk[][3])
{
    bool flag=true;
    for(int i=1;i<=9;i++)
    {
        flag=false;
        for(int j=0;j<9;j++)
            if(sdk[j/3][j%3]==i)
                flag = true;
        if (!flag)
            return false;
    }
    return true;
}
int main ()
{
    int arr[3][3];
    for(int i=0;i<9;i++)
        cin >> arr[i/3][i%3];
    if(check(arr))
        cout << "Valid" << endl;
    else
        cout << "Not Valid" << endl;
    return 0;
}
