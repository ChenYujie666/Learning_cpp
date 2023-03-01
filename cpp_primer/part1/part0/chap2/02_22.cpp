#include<iostream>
using namespace std;

int main(){
//int i = 0,*p = &i;
int i = 0,*p = 0; // p is true once p is decleared; *p is true only if *p != 0 ;
if (p) cout << p << " : " << *p << endl;
if (*p) cout << p << " : " << *p << endl;



}
