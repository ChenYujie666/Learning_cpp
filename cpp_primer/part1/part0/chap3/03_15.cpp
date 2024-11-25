#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
vector<string> ivec;
string a;

while (cin >> a){

	ivec.push_back(a);


}
for (auto &b : ivec){
	cout << b << endl;
}
}
