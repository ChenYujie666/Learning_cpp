#include<iostream>
#include<string>
#include<vector>

using namespace std;
void print_vec(vector<int> ivec){
if (ivec.begin() != ivec.end()){
	cout << *ivec.begin() << "\t";cout << "size = " << ivec.end() - ivec.begin() << endl;
	auto b = ivec.begin()+1, e = ivec.end();
	vector<int> r(b, e);
	print_vec(r);
}

else {cout << endl;}


}


int main(){

vector<int> a = {1,2,3,4,5,6,7};
print_vec(a);




}
