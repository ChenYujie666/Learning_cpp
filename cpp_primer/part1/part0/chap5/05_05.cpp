#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
int grade;
vector<string> levels = {"A","B","C","D","E","F"};
while (cin >> grade){
	string level;
	if (grade < 60) level = levels[5];
	else if (grade < 70) level = levels[4];
	else if (grade < 80) level = levels[3];
	else if (grade < 90) level = levels[2];
	else if (grade < 100) level = levels[1];
	else if (grade == 100) level = levels[0];



cout << level << endl;
}



}
