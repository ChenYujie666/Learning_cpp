#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
string s = "worlds";
string p1 = s + (s[s.size() - 1] == 's' ? "" : "s") ;
cout << p1 << endl;




}
