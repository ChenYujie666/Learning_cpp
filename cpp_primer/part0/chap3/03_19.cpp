#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){

vector<int> ivec1(10,42);
for (auto i:ivec1){cout << i << endl;}

vector<int> ivec2(ivec1);
for (auto i:ivec2){cout << i << endl;}

vector<int> ivec3 = {42,42,42,42,42,42,42,42,42,42,42};
for (auto i:ivec3){cout << i << endl;}


vector<int> ivec4 = ivec1;
for (auto i:ivec4){cout << i << endl;}

cout << "***************" << endl;
vector<int> ivec5(10);
for (auto i:ivec5){i=42;cout << i << endl;}








}
