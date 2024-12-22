// 练习9.18：编写程序，从标准输入读取string序列，存入一个deque中。编写一个循环，用迭代器打印deque中的元素。
#include<deque>
#include<iostream>
#include<string>
#include<vector>
#include<list>
using namespace std;


int main(){

    vector<string> sdeque;
    string s;
    while(cin >> s){
        sdeque.push_back(s);
    }
    for(auto i:sdeque){
        cout << i << endl;
    }
    for(auto it = sdeque.begin();it!=sdeque.end();it++){
        cout << *it << endl;
    }
}
