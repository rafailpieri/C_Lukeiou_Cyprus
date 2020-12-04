#include<iostream>
using namespace std;

void fill(char array[], int plithos){

    for(int i=0;i<plithos;i++){

        cin>>array[i];
    }

}


int main(){

 int N1,N2,N3;
    cin>>N1>>N2>>N3;
 char arr1[N1],arr2[N2],arr3[N3];

    fill(arr1,N1);
    fill(arr2,N2);
    fill(arr3,N3);

    cout<<arr1[N1-1]<<endl;
    cout<<arr2[N2-1]<<endl;
    cout<<arr3[N3-1]<<endl;

return 0;
}
