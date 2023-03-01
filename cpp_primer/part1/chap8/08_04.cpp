#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;

int main(){
string path("file.txt");
ifstream ifs;
ofstream ofs;
vector<string> svec;

ifs.open(path);
if (ifs){
	cout << "success to open file:" << path << endl;
	string s;
	while(getline(ifs, s)){
		svec.push_back(s);		
		cout << s << endl;	
	}

}
else
	cout << "success to open file:" << path << endl;
/*
for (auto s:svec){
	cout << s << endl;
}
*/
ifs.close();







}
