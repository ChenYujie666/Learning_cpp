#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
string s,pre_s,max_s;
int cnt = 1, max_cnt = 1;
while(getline(cin, s)){
	//cout << s << endl;
	//cout << "\t\t\t" << pre_s << endl;
	if (pre_s == s){
		cnt++;
		//cout << cnt << endl;
		if (cnt >= max_cnt){
			max_cnt = cnt;
			//cout << s << endl;
			max_s = s;
		}
		//cout << pre_s << endl;
	}
	else {cnt = 1;}
	pre_s = s;
}
cout << max_s << ":" << max_cnt << endl;

}
