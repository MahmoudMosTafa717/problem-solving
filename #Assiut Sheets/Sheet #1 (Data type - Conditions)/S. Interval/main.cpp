#include <iostream>

using namespace std;

int main()
{
    double x;
    cin >> x ;

    string case0 = "Out of Intervals";
    string case1 = "Interval [0,25]";
    string case2 = "Interval (25,50]";
    string case3 = "Interval (50,75]";
    string case4 = "Interval (75,100]";

    if(x >= 0 && x <= 25){
        cout << case1;
    }else
        if(x > 25 && x <= 50){
        cout << case2;
    }else
        if(x > 50 && x <= 75){
        cout << case3;
    }else
        if(x > 75 && x <= 100){
        cout << case4;
    }else cout << case0;
    return 0;
}
