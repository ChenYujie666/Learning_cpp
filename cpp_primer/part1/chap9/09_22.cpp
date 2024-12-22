// 练习9.22：假定iv是一个int的vector，下面的程序存在什么错误？你将如何修改？
// 会进入死循环，iter 迭代后加一下
#include<deque>
#include<iostream>
#include<string>
#include<vector>
#include<list>
using namespace std;


int main(){
    vector<int> iv = {1,2,3,4,5,};
    vector<int>::iterator iter = iv.begin(), mid = iv.begin() + iv.size()/2;
    int some_val = 2;
    while(iter != mid){
        if(*iter == some_val){
            iv.insert(iter, 2*some_val);

        }
        iter++;
    }
    for(auto i : iv){
        cout << i << ", ";
    }
 }
