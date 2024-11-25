#include<iostream>
#include<string>
#include<vector>

using namespace std;

string make_plural(size_t ctr, const string &word, const string &ending = "s"){
	return (ctr > 1 ) ? word + ending : word;

}


int main(){
string str = "success", ending = "es"; 
cout << make_plural(2,str,ending) << endl;



}
