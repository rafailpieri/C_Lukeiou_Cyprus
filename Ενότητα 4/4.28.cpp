#include <iostream>
#include<fstream>
#include<iomanip>

#define N 7

using namespace std;

ifstream fin ("in.txt");
ofstream fout("out.txt");

void FillData(float arr1[]){

    for(int i=0;i<N;i++){

    fin>>arr1[i];

    }

 fin.close();
}

void Calculate(float arr1[],float arr2[],float arr3[],float sum[]){

 float Total[N];

     for(int i=0;i<N;i++){

       sum[i]=arr1[i]+arr2[i]+arr3[i];
     }

}

void Print(float arr1[],float arr2[],float arr3[],float sum[]){


//int c=1;
    for(int i=0;i<N;i++){

       fout<<"Total earnigs of day "<<i+1<<": "<<sum[i]<<"€"<<endl;
      //c++; Less variables easier to track bugs
    }

fout.close();
}


int main(){

 float R1[N],R2[N],R3[N],Total[N];


    FillData(R1);
    FillData(R2);
    FillData(R3);

    Calculate(R1,R2,R3,Total);

    Print(R1,R2,R3,Total);

return 0;
}
