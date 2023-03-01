#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
vector<int> v1;			//1
vector<int> v2(10);		//10
vector<int> v3(10, 42);		//420
vector<int> v4{10};		//1
vector<int> v5{10,42};		//2
vector<string> v6{10};		//1
vector<string> v7{10,"hi"};	//10


cout << v1.size() << "," << 0 << endl;
cout << v2.size() << "," << 10 << endl;
cout << v3.size() << "," << 10<< endl;
cout << v4.size() << "," << 1<< endl;
cout << v5.size() << "," << 2<< endl;
cout << v6.size() << "," << 10<< endl;
cout << v7.size() << "," << 10<< endl;


cout << "v1: " << endl;
for (auto &a: v1){cout << a << endl;}
cout << "v2: " << endl;
for (auto &a: v2){cout << a << endl;}
cout << "v3: " << endl;
for (auto &a: v3){cout << a << endl;}
cout << "v4: " << endl;
for (auto &a: v4){cout << a << endl;}
cout << "v5: " << endl;
for (auto &a: v5){cout << a << endl;}
cout << "v6: " << endl;
for (auto &a: v6){cout << a << endl;}
cout << "v7: " << endl;
for (auto &a: v7){cout << a << endl;}



cout << "v1: " << endl;
for (auto a = v1.begin(); a != v1.end(); a++ ){cout << *a << endl;}
cout << "v2: " << endl;
for (auto a = v2.begin(); a != v2.end(); a++ ){cout << *a << endl;}
cout << "v3: " << endl;
for (auto a = v3.begin(); a != v3.end(); a++ ){cout << *a << endl;}
cout << "v4: " << endl;
for (auto a = v4.begin(); a != v4.end(); a++ ){cout << *a << endl;}
cout << "v5: " << endl;
for (auto a = v5.begin(); a != v5.end(); a++ ){cout << *a << endl;}
cout << "v6: " << endl;
for (auto a = v6.begin(); a != v6.end(); a++ ){cout << *a << endl;}
cout << "v7: " << endl;
for (auto a = v7.begin(); a != v7.end(); a++ ){cout << *a << endl;}
}
