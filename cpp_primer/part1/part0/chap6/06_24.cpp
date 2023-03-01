#include<iostream>
#include<string>
#include<vector>

using namespace std;

void print(const int ia[10],int  size){
for (size_t i = 0; i != size; ++i){ // i != 10; 每次都需要改变长度才能保证输入
	cout << ia[i] << endl;
}


}


int main(){

int ia[] = {1,2,3,4,5,6,7,8,9};
print(ia, end(ia) - begin(ia));




}
