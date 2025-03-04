//练习9.49：如果一个字母延伸到中线之上，如d或f，则称其有上出头部分（ascender）​。
//如果一个字母延伸到中线之下，如p或g，则称其有下出头部分（descender）​。
//编写程序，读入一个单词文件，输出最长的既不包含上出头部分，也不包含下出头部分的单词。
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

bool iscender(string word){
    string numbers("0123456789");


    
    string up("bdfhiklt");
    string down("gjpqy");
    if (word.find_first_of(up) != string::npos || 
        word.find_first_of(down) != string::npos){
        return false;
    }   
    return true;
}
int main() {
    string filename = "words.txt";
    ifstream ifs(filename);
    string word;
    int maxLen = 0;
    string res;
    while(ifs>>word){
        cout << word << " " << iscender(word) << endl;
        if (iscender(word)){
            if(word.size()>maxLen){
                res = word;
                maxLen = word.size();
            }
        }
    }
    cout << "result:" <<res << endl; //cannot handle the case which has 2 or more longgest word;
    return 0;
}



