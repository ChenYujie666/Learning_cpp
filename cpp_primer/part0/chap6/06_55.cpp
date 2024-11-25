#include<iostream>
#include<string>
#include<vector>

using namespace std;
int f(int, int);
int add(int a, int b){return a+b;};
int sub(int a, int b){return a-b;};
int mult(int a, int b){return a*b;};
int devi(int a, int b){return a/b;};

int main(){
vector<int(*)(int,int)> fvec = {add,sub,mult,devi};
}
