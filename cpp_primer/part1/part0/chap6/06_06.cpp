#include<iostream>
#include<string>
#include<vector>

using namespace std;
int f(int i){ // 形参i
cout << i << endl; // 局部变量
static size_t global_var = 0;// 局部静态变量
return ++global_var;


}
int main(){


int i;
while(i <= 10){
	i = f(10);
	cout << i << endl;
	i++;
}

}
