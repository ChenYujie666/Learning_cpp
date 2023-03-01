#include<iostream>
#include<string>

using namespace std;
//using namespace std::string;
int main(){
string S = "", S2, s;
//while(cin >> s)
while(getline(cin, s))

	//cout << s << endl;
	S = S+s;
	S2 = S;

cout << S << endl;
cout << S2 << endl;
return 0;
}


