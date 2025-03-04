// 练习9.45：编写一个函数，接受一个表示名字的string参数和两个分别表示前缀（如"Mr."或"Ms."）和后缀（如"Jr."或"III"）的字符串。
// 使用迭代器及insert和append函数将前缀和后缀添加到给定的名字中，将生成的新string返回。
#include <iostream>
#include <vector>
#include <string>

using namespace std;



string func(string name, string prefix, string suffix){
    name.insert(0, prefix);
    name.append(suffix);
    
    return name;
}
int main() {
    string s1 = "Sanwen";
    string prefix = "Mr.";
    string suffix = "III";
    cout << func(s1, prefix, suffix) << endl;

}



