#include<iostream>
#include<string>
#include<vector>
#include<list>
using namespace std;

bool is_same_vector(vector<int> &v1,vector<int> &v2){
    if(v1.size() != v2.size()){
        return false;
    }
    for(int i=0;i<v1.size();i++){
        if(v1[i]!=v2[i]){
            return false;
        }
    }
    return true;
}
int main(){

    vector<int> v1 = {1,2,3,4,5,6,7,8,9,10};
    vector<int> v2(10,12);
    cout << is_same_vector(v1,v2) << endl;

}
