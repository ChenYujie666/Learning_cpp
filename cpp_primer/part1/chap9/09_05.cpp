#include<vector>
#include<iostream>
#include<typeinfo>


using namespace std;


vector<int>::iterator isInVector(vector<int> &v,int i){
    // vector<int>::iterator it=v.begin();
    vector<int>::iterator it=v.begin();


    for(;it!=v.end();it++){
        if(*it==i){
            return it;
        }
    }
    return it;

}


int main(){

    vector<int> v={1,2,3,4,5,6,7,8,9,10};
    int i;
    cin>>i;
    vector<int>::iterator a = isInVector(v,i);
    cout << *a << endl;
    // if(isInVector(v,i)){
    //     cout<<"Yes"<<endl;
    // }else{
    //     cout<<"No"<<endl;
    // }
    return 0;
}