// 练习9.44：重写上一题的函数，这次使用一个下标和replace。
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
            // s.erase(loc, oldLen);
            // s.insert(loc, newVal);
            s.replace(loc, oldLen, newVal);
            l = (newLen+loc);

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



