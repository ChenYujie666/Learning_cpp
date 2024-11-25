#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
string str1, str2;
do 
{
cout << "please input 2 string " << endl;
cin >> str1 >> str2 ;
if ( str1.size() > str2.size() ) cout << str2 << endl; 
else cout << str1 << endl;

}while(cin);





}
