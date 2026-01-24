#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double x,y ;
    cin >> x >> y;
    double z = x/y;
    long long f = floor(z);
    long long c = ceil(z);
    long long r = round(z);

    cout << "floor " << x << " / " << y << " = " << f << endl;
    cout << "ceil " << x << " / " << y << " = " << c << endl;
    cout << "round " << x << " / " << y << " = " << r << endl;

    return 0;
}

/*
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, y;
    cin >> x >> y;

    double z = x / y;

    long long f = floor(z);
    long long c = ceil(z);
    long long r = round(z);

    cout << "floor " << x << " / " << y << " = " << f << endl;
    cout << "ceil " << x << " / " << y << " = " << c << endl;
    cout << "round " << x << " / " << y << " = " << r << endl;

    return 0;
}

*/
