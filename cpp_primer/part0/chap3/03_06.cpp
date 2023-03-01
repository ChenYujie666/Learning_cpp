#include<iostream>
#include<string>
using namespace std;

int main(){
string S, x = "X";

cin >> S;
for (auto &a : S){
	a = x[0];

}
cout << S << endl;




}
