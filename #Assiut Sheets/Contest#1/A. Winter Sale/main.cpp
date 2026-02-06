#include <iostream>
#include <iomanip>
using namespace std;
// A.Winter sale
int main (){

double priceAfter,discount, originalPrice;
cin >> discount >> priceAfter;
originalPrice =priceAfter / (100 - discount) *100 ;
cout << fixed << setprecision(2) << originalPrice;

return 0;
}
