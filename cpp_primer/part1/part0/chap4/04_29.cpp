#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
int x[10]; int *p = x;
cout << sizeof(x)/sizeof(*x) << endl; //1
cout << sizeof(p)/sizeof(*x) << endl; //1/10
cout << sizeof(p) << endl; //
cout << sizeof(*x) << endl; //
cout << sizeof(x) << endl; //






}
