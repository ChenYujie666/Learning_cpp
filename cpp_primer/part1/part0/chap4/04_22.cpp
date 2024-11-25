#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
int score = 60;
cin >> score;
/*
if (score >= 0){
	if (score < 60) cout << "failed" << endl;
		else if (score < 75) cout << "low pass" << endl;
			else if (score <= 100 )cout << "high pass" << endl;
				else cout << "please input the w" << endl;
}
*/
if (score >=0 && score <=100){
string res = score < 60? "failed": (score < 75?"low pass" : "high pass");
cout << res << endl;
}
else {cout << "please enter the correct score" << endl;}
}
