#include<iostream>
#include<string>
#include<vector>

using namespace std;


int max(int i, int* ip){

return i>*ip?i:*ip;
}

int main(){

int a,b;
while(cin >> a >> b)
cout << max(a,&b) << endl;




}
