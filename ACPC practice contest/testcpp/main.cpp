#include <iostream>

using namespace std;
//void test() {
//    int y;
//// init with 0
//    cout <<y << " ";
//
//     //x++;
//}
//class A {
//public:
//    static int x;
//    static void print(){
//    cout << x;
//    };
//    A() { x++; }
//};
//
////int A::x = 0;
//
//int main() {
//    A a1, a2, a3;
//    a1.print();
////    cout << A::x;
//}

//int main() {
//    test(); //1
//    test(); //2
//    test(); //3
//}

//int main()
//{
//int* p = nullptr;
//if(p) cout<<"Yes";
//else cout<<"No";
//
//
//}
//
//#include <iostream>
//using namespace std;
//
//class Test {
//public:
//    static int count;
//};
//
//int Test::count;   // no initialization
//
//int main() {
//    int x = 5;
//int* p = &x;
////cout << *p++ <<endl;       // dangerous: postfix ++ applies to pointer
//
//cout << *p + 1;     // 6
//
// //   cout << Test::count;
//}
//class A {
//public:
//    A(int v){ cout << v; }
//    ~A(){ cout << "X"; }
//};
//
//void fun(){
//    A a1(1); //1
//    {
//        A a2(2); //2
//        A a3(3); //3
//        //X for 3
//        //X for 2
//    }
//    A a4(4);//4
//    //X for 4
//    //X for 1
//}
//
//int main(){
//    fun();
//    cout << "E";
//}

//class A{
//public:
//    A(){ cout << "A"; }
//};
//
//class B{
//public:
//    B(){ cout << "B"; }
//    A a;
//
//};
//
//int main(){
//    B b;
//}
//class Test
//{
//    int x;
//public:
//    Test() { x = 0; }
//    Test(int y) { x = y++; }
//    Test(Test &r) { x = ++r.x; }
//    void print() { cout << x; }
//};
//
//int main()
//{
//    Test t(1);
//    t.print();
//    Test x(t);
//    x.print();
//    t.print();
//    return 0;
//}
//class Parent
//{
//public:
//    int x;
//    Parent(int m) { x = m; }
//};
//
//class Child : protected Parent
//{
//public:
//    int y;
//    Child(int m, int n) : Parent(m)
//    {
//        y = n;
//    }
//};
//
//class GrandChild : public Child
//{
//public:
//    int z;
//    GrandChild(int a, int b, int c) : Child(a,b)
//    {
//        z = c;
//    }
//};
//

class Parent
{
protected:
    int x;

public:
    Parent(int m)
    {
        x = m;
    }

    friend void display();
};

class Child : public Parent
{
private:
    int y;

public:
    Child(int m, int n) : Parent(m)
    {
        y = n;
    }
};

void display()
{
    Child c(3,4);
    cout << "x=" << c.x << endl;
    cout << " y=" << c.y;  // Line 1
}

void main()
{
    display();
}
