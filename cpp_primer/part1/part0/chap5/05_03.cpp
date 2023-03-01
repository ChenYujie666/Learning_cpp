#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){

int sum = 0, val = 1;
while(val <= 10 && (sum+=val, val++));//可读性降低
cout << sum << endl;




}
