#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main(){
    int *p;
    p=new int[5]; // pointer in c++
    p=(int *)malloc(5*sizeof(int)); // in c lang
    p[1]=10; p[2]=20; p[3]=30; p[4]=40; 
    for(int i=0;i<5;i++){
        cout<<p[i]<<endl;
    }  
    delete[] p; // in c++
    free(p); // in c 

}

