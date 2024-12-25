// 练习9.31：第316页中删除偶数值元素并复制奇数值元素的程序不能用于list或forward_list。为什么？修改程序，使之也能用于这些类型。
//
#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<forward_list>
using namespace std;



int main(){
    forward_list<int> il = {1,2,3,4,5,6,7,8,9,10};
    auto pre = il.before_begin();
    auto cur = il.begin();
    while(cur!= il.end()){
        if(*cur % 2 == 0){
            cur = il.erase_after(pre);
        }else{
            pre = il.insert_after(pre, *cur);
            pre++;
            cur = pre;
            cur++;
        }
    }

    cur = il.begin();
    while(cur!= il.end()){
        cout << *cur << ", ";
        cur++;
    }


}



// 练习9.32：在第316页的程序中，向下面语句这样调用insert是否合法？如果不合法，为什么？[插图]

//练习9.33：在本节最后一个例子中，如果不将insert的结果赋予begin，将会发生什么？编写程序，去掉此赋值语句，验证你的答案。练习9.34：假定vi是一个保存int的容器，其中有偶数值也有奇数值，分析下面循环的行为，然后编写程序验证你的分析是否正确。




