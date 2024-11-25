#include<iostream>
#include"Sales_item.h"
using namespace std;
int main(){
string s1 = "c",s2 = "cpp";
Sales_item item1(s1), item2(s2);
cout << "isbn\t" << "num\t" <<"price\t"<< "rev\t" << endl ;
item1.units_sold = 30;
item1.revenue = 8;
cout << item1 << endl;
//cin >> item1;




item2.units_sold = 60;
item2.revenue = 12;
cout << item2 << endl;



}
