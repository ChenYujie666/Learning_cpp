#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<cstring>
using namespace std;

int main(){

    list<const char*> cstrlist = {"abc","ABC"};
    vector<string> svec(cstrlist.begin(),cstrlist.end());
    for(auto i:svec){
        cout<<i<<", ";
    }
    svec.assign(cstrlist.begin(),cstrlist.end());
    for(auto i:svec){
        cout<<i<<", ";
    }
}
