#include <iostream>

using namespace std;
/*
Digits in ASCII '0' = 48,'1' = 49 ....etc
Capital letters in ASCII 'A' = 65, 'B' = 66 ....etc
Small letters in ASCII 'a' = 97,'b' = 98 ....etc
*/
int main()
{
    char x;
    cin >> x;

    if(x >= 48 && x <= 57){
        cout << "IS DIGIT";
    }else
        if(x >= 65 && x <= 90){
        cout << "ALPHA\nIS CAPITAL";
    }else
        if(x >= 97 && x <= 122){
        cout << "ALPHA\nIS SMALL";
    }
    return 0;
}
