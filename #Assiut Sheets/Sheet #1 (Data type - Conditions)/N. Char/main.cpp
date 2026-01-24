#include <iostream>

using namespace std;

int main()
{
    char c ;
    cin >> c;

    if (c>=97){
        cout << char(c-32) ;
    }
    else {
    cout << char(c+32);
    }
    return 0;
}

/////////////////////////////////////////////////////////
/*
#include <iostream>

using namespace std;

int main()
{
    char c ;
    cin >> c;

    if (c >= 65 && c <= 90){
        cout << char(c+32) ;
    }
    else {
    cout << char(c-32);
    }
    return 0;
}
*/
/////////////////////////////////////////////////////////
/*
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char x;
    cin >> x;

    if (islower(x))
        cout << char(toupper(x));
    else
        cout << char(tolower(x));

    return 0;
}

*/
