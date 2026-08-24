#include <iostream>
using namespace std;

struct Card {
    int face;
    int shape;
    int color;
};

int main() {

    Card deck[52];

    int k = 0;

    for (int shape = 0; shape < 4; shape++) {

        for (int face = 1; face <= 13; face++) {

            deck[k].face = face;
            deck[k].shape = shape;

            if (shape == 0 || shape == 1)
                deck[k].color = 0;   // Black
            else
                deck[k].color = 1;   // Red

            k++;
        }
    }

    // Display all cards
    for (int i = 0; i < 52; i++) {
        cout << "Card " << i + 1
             << " : Face = " << deck[i].face
             << ", Shape = " << deck[i].shape
             << ", Color = " << deck[i].color
             << endl;
    }

    return 0;
}