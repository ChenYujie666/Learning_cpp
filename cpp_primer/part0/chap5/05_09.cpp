#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){

char c;

int a=0,e=0,i=0,o=0,u=0;

while(cin >> c){
	if (c == 'a') a++;
	if (c == 'e') e++;
	if (c == 'i') i++;
	if (c == 'o') o++;
	if (c == 'u') u++;
}
cout << a << e << i << o << u <<endl;
}
