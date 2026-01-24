#include <iostream>
using namespace std;

int main() {
    float X, Y;
    cin >> X >> Y;

    if (X > 0 && Y > 0) {
        cout << "Q1" << endl;           // First quadrant
    }
    else if (X < 0 && Y > 0) {
        cout << "Q2" << endl;           // Second quadrant
    }
    else if (X < 0 && Y < 0) {
        cout << "Q3" << endl;           // Third quadrant
    }
    else if (X > 0 && Y < 0) {
        cout << "Q4" << endl;           // Fourth quadrant
    }

//////////////////////////////////////////////

    else if (X == 0 && Y == 0) {
        cout << "Origem" << endl;       // The point is at the origin
    }
    else if (X == 0) {
        cout << "Eixo Y" << endl;       // The point is on Y-axis
    }
    else if (Y == 0) {
        cout << "Eixo X" << endl;       // The point is on X-axis
    }

    return 0;
}
