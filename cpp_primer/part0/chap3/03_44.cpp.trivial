#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){

int ia[3][4] = {
		{0,1,2,3}, 
		{4,5,6,7},
		{8,9,10,11}
		};
// method 1
for (auto row = &ia[0]; row != &ia[3]; row++){
	//cout << *row << endl;
	for (auto col = *row; col != (*row)+4; col++){
		cout << *col << "\t";
	}
}
cout << endl;

//method 2
for (int i = 0; i != 3 ;i++ )
	for(int j = 0; j != 4;j++)
		{cout << ia[i][j] << "\t";}
cout << endl;

// method 3 
//cout << *(&ia[0][0]+1) << "\t";
for (int* i = &ia[0][0]; i != &ia[0][0] + 12 ;i++) cout << *i << "\t";

cout << endl;

}
