#include<iostream>
#include<string>
using namespace std;

struct Sales_data{
string Name;
unsigned int sale_count;
double price;

};


int main(){


Sales_data total;

if(cin >> total.Name >> total.sale_count >> total.price){
	Sales_data trans;
	while(cin >> trans.Name >> trans.sale_count >> trans.price){
		if(total.Name == trans.Name){
			total.sale_count += trans.sale_count;
			total.price += trans.price;
		}
		else{
			cout <<"Name: " << total.Name << "\t" << "sale_count: "  << total.sale_count << "\t" << "price: " << total.price << endl;
			total.Name = trans.Name;	
			total.sale_count = trans.sale_count;
			total.price = trans.price;
		}	
	}
	cout <<"Name: " << total.Name << "\t" << "sale_count: "  << total.sale_count << "\t" << "price: " << total.price << endl;
}
else{

cout << "error: no input!" << endl;



}



}
