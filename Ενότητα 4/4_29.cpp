#include<iostream>
#include<fstream>
#include<iomanip>
#define days 365
using namespace std;

int i;

ifstream fin("temp.txt");
ofstream fout("max.txt");

void Temperature(float arr[]){

    for(i=0;i<days;i++){

       fin>>arr[i];

    }
}

void MaxT(float arr[]){

float x=0;

    for(i=0;i<days;i++){

        if(x<arr[i])
            x=arr[i];
    }


fout<<"Max temperature: "<<endl<<x<<endl;

fout<<"Days with max temperature:"<<endl;


    for(i=0;i<days;i++){

       if(x==arr[i])
        fout<<i+1<<endl;

    }

}


int main(){

float T[days];

    Temperature(T);
    MaxT(T);

return 0;
}
