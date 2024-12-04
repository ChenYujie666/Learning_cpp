#include<iostream>
#include<string>
#include<vector>
#include<istream>
#include<sstream>
#include<fstream>
using namespace std;

int main(){
    ifstream ifs;
    vector<string> lines;

    ifs.open("../08_10.txt");
    if(!ifs) cout << "error: can not open file" << endl;
    while(ifs){
        string line;
        // ifstream line;
        getline(ifs,line);
        cout << line << endl;
        lines.push_back(line);

        istringstream iss(line);
        // iss.str;
        string word;

        while(iss>>word){
            cout << "word: " << word << endl;
        }
        // iss.clear();
    }
    ifs.close();




    return 0;
    



}
