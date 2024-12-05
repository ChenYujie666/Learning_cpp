#include<vector>
#include<iostream>



using namespace std;


bool isInVector(const vector<int> &v,int i){
    for(auto it=v.begin();it!=v.end();it++){
        if(*it==i){
            return true;
        }
    }
    return false;

}


int main(){

    vector<int> v={1,2,3,4,5,6,7,8,9,10};
    int i;
    cin>>i;
    if(isInVector(v,i)){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}