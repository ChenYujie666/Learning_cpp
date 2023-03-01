#include<iostream>
using namespace std;

int main(){

int i = 42;
int *pi = &i;
*pi = *pi * *pi;

cout << *pi;




}
