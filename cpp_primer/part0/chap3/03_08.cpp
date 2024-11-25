#include<iostream>
#include<string>
#include<string.h>
using namespace std;

int main(){
string s;
string x = "X";
cin >> s;
string::size_type l = s.size() , i = 0; 
// cout << l << endl;
// cout << i << endl;



///*
while (i < l){// for比while好 更加简介 而且直接对对象进行操作 不需要索引
	//s[i] = x;
	//cout << s[i] << endl;
	s[i] = x[0]; 
	// s[i] = x; error 错误写法
	i++;
	
}
//*/
cout << s << endl;
}
