#include<iostream>
using namespace std;
int main(){

cout << "/*"; // no error no warning
cout << "*/"; // no error no warning
// cout << /* "*/" */; //error
cout << /* "*/"" /* "/*" */; // warning











}
