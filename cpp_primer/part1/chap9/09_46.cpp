// 练习9.46：重写上一题的函数，这次使用位置和长度来管理string，并只使用insert。
#include <iostream>
#include <vector>
#include <string>

using namespace std;



string func(string name, string prefix, string suffix){
    name.insert(0, prefix);
    name.insert(name.size(), suffix);    
    return name;
}
int main() {
    string s1 = "Sanwen";
    string prefix = "Mr.";
    string suffix = "III";
    cout << func(s1, prefix, suffix) << endl;

}



