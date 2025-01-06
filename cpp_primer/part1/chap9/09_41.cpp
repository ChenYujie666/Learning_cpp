// 练习9.41：编写程序，从一个vector<char>初始化一个string。



#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<char> vec = {'a', 'b', 'c', 'd', 'e'};

    string str(vec.begin(), vec.end());
    cout << str << endl;
    return 0;
}



