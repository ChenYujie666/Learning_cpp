#include<iostream>
using namespace std;


int main(){
int ival = 1.01;
//int &rval1 = 1.01;
int &rval2 = ival;
//int &rval3;

int i = 0, &r1 = i;
double d = 0, &r2 = d;

r2 = 3.14;
r2 = r1;
i = r2;
r1 = d;




}
