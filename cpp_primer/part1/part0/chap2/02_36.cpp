#include<iostream>
#include<typeinfo>
#include<string>
using namespace std;

int main(){
int a = 3, b = 4;
decltype(a) c = a;
decltype((b)) d = a;
//++c;
++d;

cout << typeid(a).name() << endl;
cout << typeid(b).name() << endl;
cout << typeid(c).name() << endl;
cout << typeid(d).name() << endl;
cout << "a,b,c,d = " << a << "," << b << "," <<  c << "," << d <<endl;
}
