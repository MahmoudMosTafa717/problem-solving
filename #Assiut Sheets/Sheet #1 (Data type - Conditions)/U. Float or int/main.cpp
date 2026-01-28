#include <iostream>

using namespace std;

int main()
{
    float x;
    cin >> x;
    int intX = (int)x;

    if(intX == x ){
        cout << "int " << intX;
    }else{
        cout << "float " << intX << " " << (x- intX)  ;
    }
    return 0;
}
