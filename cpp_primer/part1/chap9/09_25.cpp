// 练习9.25：对于第312页中删除一个范围内的元素的程序，如果elem1与elem2相等会发生什么？如果elem2是尾后迭代器，或者elem1和elem2皆为尾后迭代器，又会发生什么？
// 一样就不删除；  从elem1开始都删除,并返回尾后； 都是尾后就不删除 
#include<deque>
#include<iostream>
#include<string>
#include<vector>
#include<list>
using namespace std;


int main(){
    vector<int> iv = {1,2,3,4,5,6,7,8,9};
    vector<int>::iterator elem1 = iv.begin()+1;
    vector<int>::iterator elem2 = iv.end()-1;
    cout << *elem1 << ", " << *elem2 << endl;
    vector<int>::iterator elem_ret = iv.erase(elem1, elem2);

    cout << *elem1 << ", " << *elem2 << ", ele" << *elem_ret << endl;
    for(auto i : iv){
        cout << i << endl;
    }
 }
