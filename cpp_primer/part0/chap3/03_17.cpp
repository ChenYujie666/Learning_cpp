#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){

string s;
vector<string> svec;
while(cin >> s){
	svec.push_back(s);
//cout << s << endl;

}
cout << svec.size() << endl;
for (auto &i : svec){

//cout << i;

	for (auto &ii : i){
		ii = toupper(ii);
	}
cout << i << endl;
}



}
