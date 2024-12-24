// 练习9.26：使用下面代码定义的ia，将ia拷贝到一个vector和一个list中。使用单迭代器版本的erase从list中删除奇数元素，从vector中删除偶数元素。
// 注意两种写法的不同， list不可用小于号进行比较， 而vector可以
// 注意删掉后返回的是不是尾后迭代器
#include<deque>
#include<iostream>
#include<string>
#include<vector>
#include<list>
using namespace std;


int main(){
    int ia[] = {0,1,1,2,3,5,8,13,21,55,89};


    vector<int> iv(ia, ia + sizeof(ia)/sizeof(int));
    list<int> il(ia, ia + sizeof(ia)/sizeof(int));
    for (auto i : iv)
    {
        cout << i << ", "; // 0, 1, 1, 3, 5, 13, 21, 55, 89,
    }
    cout << endl;

    for(auto i = iv.begin(); i < iv.end();i++ ){
        // cout << *i << ", "; 
        if(*i % 2 == 0)
            i = iv.erase(i);
    }

    for (auto i : iv)
    {
        cout << i << ", "; // 0, 1, 1, 3, 5, 13, 21, 55, 89,
    }
    cout << endl;

    for(auto i = il.begin(); i != il.end();){
        if(*i % 2 == 1)
            i = il.erase(i);
        else
            i++;
    }
    for (auto i : il)
    {
        cout << i << ", "; // 0, 1, 1, 3, 5, 13, 21, 55, 89,
    }
 }
