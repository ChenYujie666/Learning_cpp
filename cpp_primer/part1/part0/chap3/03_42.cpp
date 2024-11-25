#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
vector<int> ivec = {1,2,3,4,5,6,7,};
int a[10] = {0};


for (int i = 0; i != ivec.size(); i++ ){

	a[i] = ivec[i];
}


for (int i = 0; i != sizeof(a)/sizeof(int); i++) cout << a[i] << "\t"; cout << endl;


}
