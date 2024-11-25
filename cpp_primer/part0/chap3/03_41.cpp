#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
int ia[] = {1,2,3,4,5,6};
vector<int> ivec;



for (int i = 0; i < sizeof(ia)/sizeof(int); i++) {
	ivec.push_back(ia[i]);
	//cout << ia[i] << endl;
}
for (auto ii : ivec) cout << ii << endl;



}
