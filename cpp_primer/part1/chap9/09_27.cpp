// 练习9.27：编写程序，查找并删除forward_list<int>中的奇数元素。
#include<deque>
#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<forward_list>
using namespace std;


int main(){
    forward_list<int> ifl= {1,2,3,4,5,6,7,8,9};
    auto pre = ifl.before_begin();
    auto cur = ifl.begin();
    while(cur != ifl.end()){
        if(*cur % 2 == 1){
            cur = ifl.erase_after(pre);
        }else{
            pre = cur;
            cur++;
        }
    }
    cur = ifl.begin();
    while(cur != ifl.end()){
        cout << *cur << ", ";
        cur++;
    }
}
