#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){

/*
constexpr size_t array_size = 10;
int ia[array_size];
for (size_t ix = 0;ix < array_size; ++ix) ia[ix] = ix;  
for (size_t ix = 0;ix < array_size; ++ix) cout << ia[ix] << "\t" ; cout << endl;
*/
vector<int> ivec;
for (unsigned i = 0; i < 10; i++) ivec.push_back(i);
for (unsigned i = 0; i < 10; i++) cout << ivec[i] << "\t"; cout << endl;



}
