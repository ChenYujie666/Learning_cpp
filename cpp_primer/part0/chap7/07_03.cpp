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


Sales_data total;
if(cin >> total.bookNo >> total.units_sold >> total.revenue ){

	Sales_data trans;
	while(cin >> trans.bookNo >> trans.units_sold >> trans.revenue ){
		if(total.isbn() == trans.isbn()){
			total.combine(trans);
		}
		else{
			cout << total.bookNo << total.units_sold << total.revenue;
			total.bookNo = trans.bookNo;
			total.units_sold = trans.units_sold;
			total.revenue = trans.revenue;
		}
	}
cout << total.bookNo << total.units_sold << total.revenue;



}
else{
cerr << "error input!!!" << endl;



}


}
