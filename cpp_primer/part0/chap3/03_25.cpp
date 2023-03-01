#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
unsigned grade;
vector<unsigned> scores(11,0);


while(cin >> grade)
	if (grade <= 100){
		//++scores[grade/10];
		//++*(scores.begin() + grade/10);
		//*(scores.begin() + grade/10)++;// 为啥没有用 why this useless 
		(*(scores.begin() + grade/10))++;//  dd the () can solve the problem
	}


for (int i = 0; i != scores.size(); i++) cout << i*10 << "~" << i*10+9 << "\t" << ":" << "\t" << scores[i] << endl;



}
