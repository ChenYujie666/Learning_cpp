#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){

char c;

int a=0,e=0,i=0,o=0,u=0;

while(cin >> c){
	if (c == 'a' || c == 'A') a++;
	if (c == 'e' || c == 'E') e++;
	if (c == 'i' || c == 'I') i++;
	if (c == 'o' || c == 'O') o++;
	if (c == 'u' || c == 'U') u++;
}
cout << a << e << i << o << u <<endl;
}
