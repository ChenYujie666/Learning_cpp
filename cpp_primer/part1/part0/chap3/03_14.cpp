#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
vector<int> ivec;
int a;

while (cin >> a){

	ivec.push_back(a);


}
for (int &b : ivec){
	cout << b << endl;
}
}
