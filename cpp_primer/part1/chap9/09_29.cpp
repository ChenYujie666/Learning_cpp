// 练习9.29：假定vec包含25个元素，那么vec.resize（100）会做什么？如果接下来调用vec.resize（10）会做什么？#include<deque>
// 增加75个默认元素；删除90个元素；
#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<forward_list>
using namespace std;



int main(){
    vector<int> iv(25,1);
    iv.resize(100);
    for(auto i : iv){
        cout << i << ", ";
    }
    cout << endl;
    iv.resize(10);
    for(auto i : iv){
        cout << i << ", ";
    }

}
