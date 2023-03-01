#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
int a[100];
int *p1 = &a[9], *p2 = &a[19];
p1 += p2 - p1;// p2 = p1;
cout << p1 << " " << p2 << endl;




}
