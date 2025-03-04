//练习9.47：编写程序，
//首先查找string "ab2c3d7R4E6"中的每个数字字符，然后查找其中每个字母字符。
//编写两个版本的程序，第一个要使用find_first_of，第二个要使用find_first_not_of。

#include <iostream>
#include <vector>
#include <string>

using namespace std;

string func1(string name){
    string numbers("0123456789");
    auto b = name.begin();
    auto e = name.end();
    string::size_type pos = 0;
    while ((pos = name.find_first_of(numbers, pos)) != string::npos){
        cout << "num " << name[pos] << endl;
        pos++;
    }

    pos = 0;
    while ((pos = name.find_first_not_of(numbers, pos)) != string::npos){
        cout << "letter " << name[pos] << endl;
        pos++;
    }

    return name;
}
int main() {

    string s = "ab2c3d7R4E6";
    string prefix = "Mr.";
    string suffix = "III";
    cout << func1(s) << endl;

}



