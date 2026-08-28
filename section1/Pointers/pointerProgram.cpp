#include <iostream>
#include <stdio.h>
using namespace std;

struct Rectangle{


int length;
int breadth;
};


int main(){

    /*
    //structure code
    struct Rectangle r1;
    r1.length=5;
    r1.breadth=10;
cout<<r1.length * r1.breadth<<endl;

*/

    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *r1;
    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;
    return 0;

}