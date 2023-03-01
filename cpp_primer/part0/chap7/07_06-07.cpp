#include<iostream>
#include<string>

using namespace std;
struct Sales_data{
string bookNo;
unsigned int units_sold = 0;
double revenue = 0;
string isbn()const{return bookNo;}
Sales_data& combine(const Sales_data&);
double avg_price() const;

};

Sales_data& Sales_data::combine(const Sales_data &rhs){
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;

}



std::istream &read(std::istream &is,Sales_data &item){
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price*item.units_sold;
	return is;
} 
std::ostream &print(std::ostream &os,Sales_data const &item){
	os<< item.isbn() <<" *\t "<<item.units_sold<<" *\t "<<item.revenue<<" *\t "<<item.avg_price();
	return os;
}
Sales_data add(const Sales_data &lhs,const Sales_data &rhs){
    Sales_data sum=lhs;
    sum.combine(rhs);
    return sum;
}



double Sales_data::avg_price() const{
	if(units_sold)
	    return revenue/units_sold;
    return 0;
}

int main(){


Sales_data total;
if(read(cin, total)){

	Sales_data trans;
	while(read(cin, trans)){
		if(total.isbn() == trans.isbn()){
			total = add(total,trans);
		}
		else{

			// cout << total.bookNo << total.units_sold << total.revenue;
			print(cout, total);
			total = trans;
			// total.bookNo = trans.bookNo;
			// total.units_sold = trans.units_sold;
			// total.revenue = trans.revenue;
		}
	}
//cout << total.bookNo << total.units_sold << total.revenue;
print(cout, total);


}
else{
cerr << "error input!!!" << endl;



}


}
