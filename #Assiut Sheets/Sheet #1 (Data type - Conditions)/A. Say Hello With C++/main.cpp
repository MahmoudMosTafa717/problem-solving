#include <iostream>
#include <string>
using namespace std;

string name;

::string printHelloName(){
    string sentence = "Hello, " + name;
    return sentence;
}

int main()
{
    cin >> name;
//    cout << "Hello, " << name ;
    cout << printHelloName();
    return 0;
}
