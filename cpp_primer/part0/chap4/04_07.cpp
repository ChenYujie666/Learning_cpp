#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
int i = 2147483647;
cout << i+1 << endl;

unsigned u = 0;
cout << u-1 << endl;

size_t st = 0;
cout << st-1 << endl;


float f = 1.7e100;
cout << f * 1e38 << endl;
}
