// 练习9.33：在本节最后一个例子中，如果不将insert的结果赋予begin，将会发生什么？编写程序，去掉此赋值语句，验证你的答案。
// 会一直在第二个元素的位置插入42


#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<forward_list>
using namespace std;



int main(){
    vector<int> vi = {1,2,3,4,5,6,7,8,9};
    auto begin = vi.begin();
    while(begin != vi.end()){
        ++begin;
        vi.insert(begin, 42);
        ++begin;
    }
    for(auto i : vi){
        cout << i << ", ";
    }
}

// 练习9.32：在第316页的程序中，向下面语句这样调用insert是否合法？如果不合法，为什么？[插图]

// 练习9.33：在本节最后一个例子中，如果不将insert的结果赋予begin，将会发生什么？编写程序，去掉此赋值语句，验证你的答案。
// 练习9.34：假定vi是一个保存int的容器，其中有偶数值也有奇数值，分析下面循环的行为，然后编写程序验证你的分析是否正确。




