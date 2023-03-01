#include<iostream>
#include<string>
#include<vector>

using namespace std;
void print1(int i){
cout << i << endl;
}

void print2(const int &i){
cout << i << endl;
}

void print3(int *pi){
cout << *pi << endl;
}

void print4(int *p1, int* p2){
while (p1 != p2)
cout << *p1++;
cout << endl;
}
void print5(int (&iarr)[2]){
for (auto i: iarr){cout << i;}
cout << endl;

}

int main(){

int i = 0, j[2] = {0, 1};

print1(i);
print2(i);
print3(&i);//print3(j);
print4(begin(j), end(j));
print5(j);







}
