#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
string s,pre_s;
while(cin >> s){
	if (pre_s == s) {
		cout << s << endl;
		break;
	}
	else  cout << "no repeated words" << endl;
	pre_s = s;
}



}
