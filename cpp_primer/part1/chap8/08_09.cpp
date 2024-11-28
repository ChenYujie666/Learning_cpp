#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include <typeinfo>

using namespace std;


istream& func(istream& is){
	string s;
	int index = 0;
	auto is_state = is.rdstate();
	while(!is_state){
		is >> s;
        cout << "this is the " << ++index << "th run." << endl;
        cout << s  << "\t" << endl;

		is_state = is.rdstate();

		if(!is_state){
			cout << endl;
		}

	}
	is.clear();
	// cout << i << endl;
	return is;
}



int main(){
    string s("1\n2\0\r4\55");
    cout << endl;
    // cout << typeid(s).name() << endl;
    istringstream iss(s);
    func(iss);
    
    return 0;
}
