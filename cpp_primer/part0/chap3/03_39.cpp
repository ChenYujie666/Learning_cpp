#include<iostream>
#include<string>
#include<vector>
#include<string.h>
using namespace std;

int main(){

string s1, s2;
cin >> s1;
cin >> s2;
auto s1p = s1.begin();
auto s2p = s2.begin();

while(s1p != s1.end() && s2p != s2.end() && *s1p == *s2p ){
	s1p++;
	s2p++;

}
if (*s1p > *s2p) cout << ">" << endl;
else if (*s1p < *s2p) cout << "<" << endl;
else cout << "=" << endl;


char chars1[10], chars2[10];
cin >> chars1 >> chars2;
int i = 0;
while (i < strlen(chars1) && i < strlen(chars2) && chars1[i] == chars2[i]){
	i++;

}
if (chars1[i] > chars2[i]) cout << ">" << endl;
else if (chars1[i] < chars2[i]) cout << "<" << endl;
else cout << "=" << endl;



}
