// 练习9.21：如果我们将第308页中使用insert返回值将元素添加到list中的循环程序改写为将元素插入到vector中，分析循环将如何工作。
// 会变成头插vector 复杂度很高
#include<deque>
#include<iostream>
#include<string>
#include<vector>
#include<list>
using namespace std;


int main(){
    vector<string> lst;
    auto iter = lst.begin();
    
    string word;
    while(cin >> word){
        iter = lst.insert(iter, word);
    }

    for(auto i : lst){
        cout<< i << endl;
    }
}
