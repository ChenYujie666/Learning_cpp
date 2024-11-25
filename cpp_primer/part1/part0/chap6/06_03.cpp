#include<iostream>
#include<string>
#include<vector>

using namespace std;


int fact(int n){
int p = 1;
for(int i = 1; i != n+1; i++){
	p *= i;

}
return p;
}


int main(){

cout << fact(8) << endl;




}
