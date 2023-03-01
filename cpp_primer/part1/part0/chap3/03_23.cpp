#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
vector<int> ivec{1,2,3,4,5,6,7,8,9,0};
//for (auto &i:ivec){i *= 2; cout << i << endl;}
for (auto i = ivec.begin(); i != ivec.end(); i++ ){*i *= 2; cout << *i << endl;}








}
