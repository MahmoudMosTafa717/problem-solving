#include <iostream>

using namespace std;

int main()
{
    int age;
    cin >> age;

/*
    int years = age / 365 ;
    int months = (age % 365) / 30 ;
    int days = ((age % 365) % 30)  ;
*/

    cout << years << " years" <<endl;
    cout << months << " months" <<endl;
    cout << days << " days" <<endl;

    return 0;
}
