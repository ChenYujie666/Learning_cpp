#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
vector<int> ivec;
int i;
while(cin >> i){ivec.push_back(i);}
//for (int i:ivec){cout << i << endl;}
if (ivec.size() ==1 ){cout << ivec[0] << endl;}



//for (auto i = 0; i != ivec.size()-1 ;i++){cout << ivec[i] + ivec[i+1];}
for (auto i = ivec.begin(); i != ivec.end() ;i++){cout << *i + *(i+1) << endl;}




}
