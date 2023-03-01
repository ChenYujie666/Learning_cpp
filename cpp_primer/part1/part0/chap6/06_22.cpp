#include<iostream>
#include<string>
#include<vector>

using namespace std;

int swap(int *&pa, int *&pb){
int* t = pa;
pa = pb;
pb = t;
}


int main(){
int a = 0, b = 1;
// while(cin >> a >> b) {
int* pa = &a, *pb = &b;
cout << pa << pb << endl;
swap(pa, pb); 
cout << pa << pb << endl;}
//}
