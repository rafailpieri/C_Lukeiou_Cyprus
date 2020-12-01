#include <iostream>
using namespace std;
int main ()
{
    int arr[5][5],sum=0,max_sum=0,maxln=0;
    for(int i=0;i<25;i++)
        cin >> arr[i/5][i%5];
    cout << "Sums: ";
    for(int i=0;i<25;i++)
    {
        sum+=arr[i/5][i%5];
        if(i%5==4){
            cout << sum << " ";
            if(sum>max_sum)
            {
                max_sum=sum;
                maxln=i/5;
            }
            sum=0;
        }
    }
    cout << endl << "Max: " << max_sum << " line: " << maxln;

}
