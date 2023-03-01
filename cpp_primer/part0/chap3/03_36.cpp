#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
int a[3] = {1,2,3}, b[3] = {1,2,3};
int *pa = &a[0],*pb = &b[0];
int i = 0;
while(*pa == *pb){
	i++;pa++;pb++;
}
if(i == sizeof(a)/sizeof(int) && i == sizeof(b)/sizeof(int) )
	cout << "==" << endl;
else
	cout << "!=" << endl;


vector<int> ivec1 = {1,2,3},ivec2 = {1,2,4};
auto v1 = ivec1.begin();
auto v2 = ivec2.begin();
i = 0;
while(*v1 == *v2 && i<ivec1.size()){
	//cout << *v1 << "\t" << *v2 << endl;
	i++;v1++;v2++;
	//cout << i << "\t" << endl;
}
// cout << i << "\t" << ivec1.size() << endl;
if(i == ivec1.size() && i == ivec2.size() )
	cout << "==" << endl;
else
	cout << "!=" << endl;


}
