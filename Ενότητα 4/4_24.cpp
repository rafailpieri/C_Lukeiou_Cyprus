#include<iostream>
using namespace std;

int max3(int a,int b,int c){

    if(a>b&&a>c)
        return a;

     if(b>a&&b>c)
        return b;

     if(c>a&&c>b)
        return c;


}

int main(){

int num1,num2,num3,max;

    cout<<"Dose 3 arithmus"<<endl;
    cin>>num1>>num2>>num3;

    max= max3(num1,num2,num3);

   cout<<"O megaliteros arithmos einai: "<<max;

return 0;
}
