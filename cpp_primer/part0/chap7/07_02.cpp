#include<iostream>
#include<string>

using namespace std;
struct Sales_data{
string bookNo;
unsigned int units_sold;
double revenue;
string isbn(){return bookNo;}
Sales_data& combine(const Sales_data&);


};

Sales_data& Sales_data::combine(const Sales_data &rhs){
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;

}

int main(){






}
