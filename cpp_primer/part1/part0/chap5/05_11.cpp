#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){

char c;

int a=0,e=0,i=0,o=0,u=0,cnt_sp=0,cnt_tab=0,cnt_ent=0;

while(cin >> noskipws >> c){
	if (c == 'a' || c == 'A') a++;
	if (c == 'e' || c == 'E') e++;
	if (c == 'i' || c == 'I') i++;
	if (c == 'o' || c == 'O') o++;
	if (c == 'u' || c == 'U') u++;
	if (c == ' ') cnt_sp++;
	if (c == '\t') cnt_tab++;
	if (c == '\n') cnt_ent++;

}
cout << a << e << i << o << u << cnt_sp << cnt_tab << cnt_ent << endl;
}
