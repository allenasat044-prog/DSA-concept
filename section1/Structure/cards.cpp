#include <iostream>
using namespace std;

struct Card {
    int face;
    int shape;
    int color;
};

int main() {

    struct Card c1;

    c1.face = 1;      // Ace
    c1.shape = 0;     // Clubs
    c1.color = 0;     // Black

    cout << "Face: " << c1.face << endl;
    cout << "Shape: " << c1.shape << endl;
    cout << "Color: " << c1.color << endl;

    return 0;
}