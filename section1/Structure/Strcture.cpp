#include <iostream>
using namespace std;
struct rectangle {
    int length ;
    int breadth;
    char x;

};
int main(){
    struct rectangle r1;
    r1.length =10;
    r1.breadth =5;
    cout<<sizeof(r1)<<endl;
    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;
    cout<<"area of r1"<< r1.length * r1.breadth <<endl;

    return 1;


}
