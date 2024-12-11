#include<iostream>
#include<string>
#include<vector>
#include<list>
using namespace std;

bool is_same_vector(list<int> &v1,vector<int> &v2){
    if(v1.size() != v2.size()){
        return false;
    }


    auto it = v1.begin();
    int i = 0;
    while(it != v1.end()){
        if(*it!=v2[i]){
            return false;
        }
        i++;
        it++;
    }

    return true;
}
int main(){

    list<int> v1(10,12); // = {1,2,3,4,5,6,7,8,9,10};
    vector<int> v2(10,12);
    cout << is_same_vector(v1,v2) << endl;

}
