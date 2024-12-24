// 练习9.24：编写程序，分别使用at、下标运算符、front和begin提取一个vector中的第一个元素。在一个空vector上测试你的程序。
// 
#include<deque>
#include<iostream>
#include<string>
#include<vector>
#include<list>
using namespace std;


int main(){
    vector<int> iv = {};
    int val1 = iv.at(0); // 这里会报错， 下面的都不会  只会引发未定义行为

    int val2 = iv[0];
    int val3 = iv.front();
    int val4 = *iv.begin();


    cout << val1 << ", " << val2 << ", " << val3 << ", " << val4 << endl;

 }
