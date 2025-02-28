// 练习9.43：编写一个函数，接受三个string参数s、oldVal和newVal。
// 使用迭代器及insert和erase函数将s中所有oldVal替换为newVal。
// 测试你的程序，用它替换通用的简写形式，如，将"tho"替换为"though"，将"thru"替换为"through"。

#include <iostream>
#include <vector>
#include <string>

using namespace std;



string func(string s, string oldVal, string newVal){
    int l = 0;
    size_t oldLen = oldVal.size();
    size_t newLen = newVal.size();

    while(l < s.size() - oldLen){
        size_t loc = s.find(oldVal, l);
        if(loc != string::npos){
            s.erase(loc, oldLen);
            s.insert(loc, newVal);
            l += (newLen+loc);

        }
        else{
            l++;
        }
        cout << s << endl;
    }


    return s;
}
int main() {
    string s1 = "tho21fjoajo_tho_thothoa  asdfwi_tho_tho";
    string newVal = "though";
    string oldVal = "tho";
    cout << func(s1, oldVal, newVal) << endl;


    
}



