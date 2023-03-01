#include<iostream>
#include<string>
#include<vector>
#include<string.h>
using namespace std;

int main(){
char chs1[] = "1111111", chs2[] = "222222222";
char chs[sizeof(chs1)+sizeof(chs2)];
strcpy( chs , strcat(chs1,chs2));
cout << chs << endl;




}
