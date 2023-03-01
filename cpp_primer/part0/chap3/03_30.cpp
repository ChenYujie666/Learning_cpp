#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){


constexpr size_t array_size = 10;
int ia[array_size];
for (size_t ix = 1;ix <= array_size; ++ix) ia[ix] = ix; // index is not correct 
for (size_t ix = 0;ix <= array_size; ++ix) cout << ia[ix] << "\t" ; cout << endl;


}
