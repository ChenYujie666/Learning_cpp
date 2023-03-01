#include<iostream>
using namespace std;

int main(){
int i = 10, j = 20;
int* pi = &i;



cout << pi << " : " << i << endl;

*pi = 100;


cout << pi << " : " << i << endl;


pi = &j;

cout << pi << " : " << j << endl;

}
