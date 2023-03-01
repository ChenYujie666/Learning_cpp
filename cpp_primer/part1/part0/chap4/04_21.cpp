#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){

vector<int> ivec = {4,6,3,4,5,8,6,3,1,7,9};
for (auto &i:ivec){i = i%2 == 0? i:i*2;}
for (auto i:ivec){cout << i << endl;}




}
