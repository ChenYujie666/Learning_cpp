#include<iostream>
#include<string>
#include<vector>

using namespace std;
bool contain_up(const string& str){//这里str是常量引用而不是引用
bool a = false;
	for (auto s:str){
		if (isupper(s)){a = true; break;}
	}
return a;
}

void to_lower(string &str){ //这里str是引用而是不常量引用
for (auto &s:str){
	if(isupper(s)) s = tolower(s);
}



}




int main(){
string str = "Ads";
to_lower(str);
cout << (contain_up(str)) << endl;





}
