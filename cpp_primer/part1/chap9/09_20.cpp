// 练习9.20：编写程序，从一个list<int>拷贝元素到两个deque中。值为偶数的所有元素都拷贝到一个deque中，而奇数值元素都拷贝到另一个deque中。
// 不知道啊
#include<deque>
#include<iostream>
#include<string>
#include<vector>
#include<list>
using namespace std;


int main(){
    list<int> ilist = {1,2,3,4,5,6,7,8,9,10};

    deque<int> odd;
    deque<int> even;
    for(auto i:ilist){
        if(i%2==0){
            even.push_back(i);
        }else{
            odd.push_back(i);
        }
    }
    for(auto i:odd){
        cout << i << ", ";
    }
    cout << endl;
    for(auto i:even){
        cout << i << ", ";
    }
}
