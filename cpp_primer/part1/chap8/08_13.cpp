#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<fstream>
using namespace std;
struct PersonInfo
{
    string name;
    vector<string> phones;
};

int main(){
    string line, word;
    vector<PersonInfo> people;

    ifstream ifs("../08_13.txt");
    // ifs.open;
    while (getline(ifs, line))
    {
        PersonInfo info;
        istringstream record(line);
        record >> info.name;
        while (record >> word)
        {
            info.phones.push_back(word);
        }
        people.push_back(info);
    }
    ifs.close();
}


