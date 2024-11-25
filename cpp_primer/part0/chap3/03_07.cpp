#include<iostream>
#include<string>
using namespace std;

int main(){
string S, x = "X";

cin >> S;
for (char &a : S){// "auto" change to "char" no visible change
	a = x[0];

}
cout << S << endl;




}
