#include<iostream>
#include<string>
#include<vector>
#include<exception>
#include<stdexcept>
using namespace std;

int main(){
int i1,i2;
char c;
begin: cin >> i1 >> i2;
try{
	if (i2 == 0){
		throw std::runtime_error("do not devide 0!");
	}
}
catch(runtime_error err){
	cout << err.what() << "try again" << endl;
	cout << "input y to try again" ;
	cin >> c;
	if (c == 'y')
		goto begin;
}


}
