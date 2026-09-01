#include <iostream>
using namespace std;
struct rectangle{
    int length;
    int breadth;

};
int main(){
    struct rectangle *p;
    p=(struct rectangle *)malloc(sizeof(struct rectangle)); // in c lang
    p=new rectangle; // in c++

    p->length=2;
    p->breadth=2;

    cout<<p->breadth<<endl;
    cout<<p->length<<endl;
     return 1;
     free(p);
     delete[]p;



}