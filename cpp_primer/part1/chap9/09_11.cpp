#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){

    vector<int> v1 = {1,2,3,4,5,6,7,8,9,10};
    vector<int> v2(10,12);
    vector<int> v3(11);
    vector<int> v4 = v1;
    vector<int> v5(v1);
    vector<int> v6(v1.begin(),v1.end()-1);

    cout << "v1: " ;
    for(auto i:v1){
        cout<<i;
    }
    cout << endl;
    
    cout<<"v2: " ;
    for(auto i:v2){
        cout<<i;
    }
    cout << endl;
    cout<<"v3: " ;
    for(auto i:v3){
        cout<<i;
    }
    cout << endl;
    cout<<"v4: " ;
    for(auto i:v4){
        cout<<i;
    }
    cout << endl;
    cout<<"v5: " ;
    for(auto i:v5){
        cout<<i;
    }
    cout << endl;
    cout<<"v6: " ;
    for(auto i:v6){
        cout<<i;
    }
    cout << endl;

}
