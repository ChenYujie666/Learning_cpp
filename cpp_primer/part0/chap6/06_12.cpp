#include<iostream>
#include<string>
#include<vector>

using namespace std;
void swap(int &i, int &j){ // 和交换指针差不多吧
int temp = i;
i = j;
j = temp;

}



int main(){
int i = 1, j = 2;
swap(i,j);
cout << i << j << endl;





}
