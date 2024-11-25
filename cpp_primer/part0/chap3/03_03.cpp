#include<iostream>
#include<string>
using namespace std;

int main(){
string s, line1, line2;
getline(cin , line1);
getline(cin , line2);
if (line1.size() >= line2.size()) cout << line1 << endl;
else cout  << line2 << endl;




}
