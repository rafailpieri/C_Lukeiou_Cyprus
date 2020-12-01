#include <iostream>
#include <stdio.h>
using namespace std;

void rect(double w,double l,double &e,double &p){
    e=w*l;
    p=2*(w+l);
}

int main() {
    double a,b,e,p;
    cin >> a >> b;
    rect(a,b,e,p);
    printf("%.1f",e);
    printf(" %.1f\n",p);
    return 0;
}
