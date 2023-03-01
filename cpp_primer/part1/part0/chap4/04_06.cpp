#include<iostream>
#include<string>
#include<string.h>
#include<vector>
#include<typeinfo>

using namespace std;

int main(){

int i;
cin >> i;
//cout << typeid(i) << endl;
auto r = (typeid(i) == typeid(int));

cout << r << endl;
if (r){ // 条件用不好
	string s =  i%2!=0? "奇数":"偶数";
	cout << s << endl;
}



}
