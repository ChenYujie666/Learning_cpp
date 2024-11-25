#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
int a[2] = {2,0};
int *ptr = &a[0];
cout << ptr << endl;
cout << ((ptr != 0) && *ptr++) << endl; // 当指针非空时判断指针值是不是0 并后移指针
cout << ptr << endl;


int ival = 1;
cout << (ival++ && ival) << endl; // 判断ival是不是-1或0
ival = 0;
vector<int> vec = {2,6,4,8,10};
cout << (vec[ival+1] <= vec[ival]) << endl; // 不能用自增++ 因为不管前置后置 两个索引会一起增加





}
