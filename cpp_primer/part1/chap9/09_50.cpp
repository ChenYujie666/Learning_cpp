//练习9.50：编写程序处理一个vector<string>，其元素都表示整型值。
//计算vector中所有元素之和。修改程序，使之计算表示浮点值的string之和。
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

// float string2float(string s){ //你要找的是不是 stof
//     s.find_first_of(".");
// }

bool sum_svec(vector<string> svec){
    
}
int main() {
    vector<string> svec = {"2.2","1.1","3.3"};
    float sum = 0.0f;
    for(auto s:svec){
        sum+=stof(s);

    }
    cout << sum << endl;
}



