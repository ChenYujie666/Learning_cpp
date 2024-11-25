#include<iostream>
#include<string>
#include<vector>

using namespace std;

void f(){
	cout << "调用函数 " << __func__ << "()" << endl;
}

void f(int)
{
    cout << "调用函数 " << __func__ << "(int)" << endl;
}

void f(int,int)
{
    cout << "调用函数 " << __func__ << "(int,int)" << endl;
}

void f(double,double = 3.14)
{
    cout << "调用函数 " << __func__ << "(double,double = 3.14)" << endl;
}

int main(){
f();
f(1);
f(1,2);
f(1.0);

}
