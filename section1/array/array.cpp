// Ways in which we can initialize an array

#include <iostream>
using namespace std;

int main() {

    // First way
    int A[] = {1, 2, 3, 4};
    cout << A[2] << endl;

    // Second way
    int B[5];
    B[0] = 2;
    B[1] = 3;

    cout << sizeof(B) << endl;
    cout << B[0] << endl;
    cout << B[1] << endl;

    // Third way
    const int n = 5;
    int C[n] = {};
    C[1] = 23;
    for (int x : C) {
        cout << x << endl;  //for each loop
    }

    // Fourth way`
    int D[5] = {2, 6, 8, 10};
    for (int i = 0; i < 5; i++) {
        cout << D[i] << endl;
    }

    return 0;
}