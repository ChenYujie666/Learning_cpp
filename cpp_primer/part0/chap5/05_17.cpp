#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
vector<int> ivec1 = {1,2,3,4,5,6}, ivec2 = {1,2,3};
int min_len = ivec1.size()>ivec2.size()? ivec2.size():ivec1.size(); 
int flag = 1;
for (int i = 0; i != min_len; i++ ){
	if (*(ivec1.begin()+i) == *(ivec2.begin()+i)) flag = 1;
	else {flag = 0; break;}
}

if (!flag) cout << "not ";cout << "contain" << endl;
}
