// 练习9.19：重写上题的程序，用list替代deque。列出程序要做出哪些改变。
// 不知道啊
#include<deque>
#include<iostream>
#include<string>
#include<vector>
#include<list>
using namespace std;


int main(){

    vector<string> slist;
    string s;
    while(cin >> s){
        slist.push_back(s);
    }
    for(auto i:slist){
        cout << i << endl;
    }
    for(auto it = slist.begin();it!=slist.end();it++){
        cout << *it << endl;
    }
}
