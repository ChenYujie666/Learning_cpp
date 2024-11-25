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
int i;
cout << "Please Enter an Int" << endl;
while(cin >> i)
cout << "the fact of " << i << " is " << fact(i) << endl;


}
