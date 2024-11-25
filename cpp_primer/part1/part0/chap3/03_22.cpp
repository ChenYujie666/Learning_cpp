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
//for (auto &i : svec){
for (auto i = svec.begin(); i != svec.end() ; i++){

//cout << i;

	//for (auto &ii : i){
	for (auto ii = (*i).begin(); ii != (*i).end(); ii++){
		*ii = toupper(*ii);
	}
cout << *i << endl;
}



}
