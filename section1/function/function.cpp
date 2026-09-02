#include <iostream>
using namespace std;
int functionAdd(int a, int b){.   // this is prototype / signature of a function
    // a and b are formal parameter
    int c;       
    c=a+b;
    return c;
    // under { } this is a defination of a function
}
int main(){
    int num1 ,num2, sum;
    // this is the actual parameter
    num1=10;
    num2=10;

    sum=functionAdd(num1, num2);
    //calling function
    cout<< "the sum is " <<sum<<endl;
    return 0;
}