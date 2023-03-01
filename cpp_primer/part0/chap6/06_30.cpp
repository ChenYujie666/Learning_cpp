#include<iostream>
#include<string>
#include<vector>

using namespace std;


bool str_subrange(const string &str1, const string &str2){

	if (str1.size() == str2.size()) return str1 == str2;
	auto size = (str1.size() < str2.size()) ? str1.size(): str2.size();
	for (decltype(size) i = 0; i != size; ++i){
		if (str1[i] != str2[i]) return; // **************函数返回是bool时 没有返回值会报错，不会默认返回0
	
	
	}


}
int main(){






}
