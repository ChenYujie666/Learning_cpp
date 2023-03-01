#include<iostream>
#include<string>
#include<vector>

using namespace std;
int sum(initializer_list<int> li){
int s = 0;
for (auto elem:li) s+=elem;
return s;
}


int main(){
cout << sum({1,2,3,4,5,6}) << endl;





}
