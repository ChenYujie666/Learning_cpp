#include<iostream>
#include<string>


using namespace std;

int main(){
string s;
cin >> s;

for (auto &a : s){

	if(!ispunct(a)){
		cout << a;
	}

}





}
