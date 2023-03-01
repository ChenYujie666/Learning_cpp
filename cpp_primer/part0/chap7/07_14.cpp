#include <string>
#include <iostream>
using namespace std;
class Sales_data;
istream& read(istream&,Sales_data&);





class Sales_data{
public:
// Sales_data() = default;
// Sales_data(const std::string &s):bookNo(s) {cout << "construct func1";}
// Sales_data(const std::string &s, unsigned n, double p):bookNo(s), units_sold(n), revenue(n*p){cout << "construct func2";}
Sales_data(istream &is){
	// cout << "Sales_data is constructing..." << endl;
	read(is, *this);
	// cout << "done" << endl;

}

Sales_data():units_sold(5), revenue(5){ }
string isbn()const{return bookNo;}
Sales_data& combine(const Sales_data&);
// double avg_price() const;

string bookNo;
unsigned int units_sold;
double revenue;
};


Sales_data& Sales_data::combine(const Sales_data &rhs){
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}


std::istream &read(std::istream &is,Sales_data &item){
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
} 
std::ostream &print(std::ostream &os,Sales_data const &item){
	os<< item.isbn() <<" *\t "<< item.units_sold <<" *\t "<<item.revenue<<" *\t "<< endl;;//<<item.avg_price();
	return os;
}
Sales_data add(const Sales_data &lhs,const Sales_data &rhs){
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}




// double Sales_data::avg_price() const{
// 	if(units_sold)
// 	    return revenue/units_sold;
//     return 0;
// }

int main()
{
	Sales_data sa;
	print(cout, sa);
// // Sales_data conscin(cin);

// // Sales_data cons1("bookno");
// // Sales_data cons2("bookno",1,2);
// // Sales_data total(cin);
// Sales_data total(cin);print(cout, total);
// if(!total.isbn().empty()){

// 		istream& is = cin;
// 		while(is){

// 		Sales_data trans(is); print(cout, trans)<< endl; //为什么这里print后面输出一个endl才能后续输入？
// 		if(total.isbn() == trans.isbn()){
// 			total = add(total, trans);
// 		}
// 		else{
// 			// cout << total.bookNo << total.units_sold << total.revenue;
// 			print(cout, total) << endl;
// 			total = trans;
// 			// total.bookNo = trans.bookNo;
// 			// total.units_sold = trans.units_sold;
// 			// total.revenue = trans.revenue;
// 		}
// 	}
// //cout << total.bookNo << total.units_sold << total.revenue;
// print(cout, total) << endl;


// }
// else{
// cerr << "error input!!!" << endl;



// }


}
