#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
int a[10] = {1,2,3,4,5,6,7,8,9,10};
cout << a << endl;
//for(int* p = &a[0]; (p-&a[0]) < 10; p++ ) *p = 0;
for(int* p = &a[0]; (p-&a[0]) < 10; ) *(p++) = 0;
//for(int i = 0; i < 10; i++ ) a[i] = 0;
for(int i = 0; i < 10; i++ ) cout << a[i] << "\t";
cout << endl;






}
