#include <iostream>
using namespace std;

    int main(){
        int A[]={2,4,6,8,10};
        int *p;
        // U DON'T HAAVE TO GIVE '&' WHERN U ARE GIVE ARRAY NME TO A POINETER 
        // aalthough if u wnat to give then put as 
        p=&A[0]; // want to use '&'
        p=A;
        for (int i=0;i<5;i++){
            cout<<p[i]<<endl; // via pointer 
            cout<<A[i]<<endl; // via Array name
            
        }

    }