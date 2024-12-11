#include<iostream>
#include<string>
#include<vector>
#include<list>
using namespace std;

int main(){

    list<int> list1 = {1,2,3,4,5,6,7,8,9,10};
    vector<double> vec(list1.begin(),list1.end()); // may only way to convert form other container or types
    vector<int> vec1(10,1);
    // vector<double> vec2 = vec1; //error
    // vector<double> vec = list1; // error
    // list<int> list2 = (list1); // error

    // for(auto i:vec){
    //     cout<<i<<endl;
    // }
}
