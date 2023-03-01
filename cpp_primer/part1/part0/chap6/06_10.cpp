#include<iostream>
#include<string>
#include<vector>

using namespace std;

void swap(int* pa, int* pb){
int tmp = *pa;
*pa = *pb;
*pb = tmp;

}


int main(){
int a = 1, b = 2, *pa = &a, *pb = &b;
swap(pa,pb);
cout << a<< b<< endl;




}
