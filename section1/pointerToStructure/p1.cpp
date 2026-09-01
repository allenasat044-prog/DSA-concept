
#include <iostream>
using namespace std;
struct square{
    int length;
    int breadth;
};
int main(){
    // strcture
    struct square r ={10,5};
    r.length=1;
    r.breadth=1;
    cout<<r.length<<endl;
    cout<<r.breadth<<endl;
    //pointer
    struct square *p=&r;
    p->breadth=2;
    p->length=2;
    cout<<p->breadth<<endl;
    cout<<p->length<<endl;


return 0;
free(p);
delete[]p;
}