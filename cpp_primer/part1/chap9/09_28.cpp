// 练习9.28：编写函数，接受一个forward_list<string>和两个string共三个参数。函数应在链表中查找第一个string，并将第二个string插入到紧接着第一个string之后的位置。若第一个string未在链表中，则将第二个string插入到链表末尾。
#include<deque>
#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<forward_list>
using namespace std;

void func(forward_list<string> &sfl, string s1, string s2){
    auto pre = sfl.before_begin();
    auto cur = sfl.begin();
    while(cur != sfl.end()){
        if(*cur == s1){
            sfl.insert_after(cur, s2);
            break;
        }else{
            pre = cur;
            cur++;
        }

    }
    if(cur == sfl.end())
        sfl.insert_after(pre, s2);
}

int main(){
    forward_list<string> sfl= {"1,2,3,4,5,6,7,8,9","123456789","sadf"};
    func(sfl, "kfc", "cyj");
    auto cur = sfl.begin();
    while(cur!= sfl.end()){
        cout << *cur << ", ";
        cur++;
    }
}
