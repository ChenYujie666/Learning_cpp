#include<iostream>
#include<string>
using namespace std;
#include<fstream>
struct Sales_data{
string Name;
unsigned int sale_count;
double price;

};


int main(){
ifstream ifs;
ifs.open("sales_data.txt");
if(ifs) cout << "success to open file" << endl;
Sales_data total;

if(ifs >> total.Name >> total.sale_count >> total.price){
	Sales_data trans;
	while(ifs >> trans.Name >> trans.sale_count >> trans.price){
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

ifs.close();cout << "ifs is closed" << endl;

}
