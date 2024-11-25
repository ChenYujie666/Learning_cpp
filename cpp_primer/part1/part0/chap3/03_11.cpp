#include<iostream>
#include<string>


using namespace std;

int main(){

const string s = "Keep going!";
for (const char &a:s){ // auto == const chat; legal only if "the operate is read-only"
	cout << a << endl;
	//a = s[0];



}




}
