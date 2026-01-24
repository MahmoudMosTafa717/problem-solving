#include <iostream>

using namespace std;

int main()
{
    string fName1,lName1;
    cin >> fName1 >> lName1;

    string fName2,lName2;
    cin >> fName2 >> lName2;
    if(lName1==lName2)
    {
        cout << "ARE Brothers";
    }
    else{
        cout << "NOT";
    }
    return 0;
}
