#include<iostream>
#include<string>
using namespace std;
#include<fstream>
struct Sales_data{
string Name;
unsigned int sale_count;
double price;

};


int main(int arg1, char** filename){
	if (arg1<3)
	{
		cout<< "Usage: " << *filename << " <filename>" << endl;
		return 1;
	}
		
	ifstream ifs;
	cout << filename[1] << endl;
	string filenamestring = filename[1];

	cout << filenamestring << endl;
	ifs.open(filenamestring, ifstream::app);
	cout << filenamestring << endl;
	if(ifs) cout << "success to open file" << endl;
	Sales_data total;
	ofstream ofs;
	ofs.open((filename[2]), ofstream::app);
	if(ifs >> total.Name >> total.sale_count >> total.price){
		Sales_data trans;
		while(ifs >> trans.Name >> trans.sale_count >> trans.price){
			if(total.Name == trans.Name){
				total.sale_count += trans.sale_count;
				total.price += trans.price;
			}
			else{
				cout <<"Name: " << total.Name << "\t" << "sale_count: "  << total.sale_count << "\t" << "price: " << total.price << endl;
				ofs <<"Name: " << total.Name << "\t" << "sale_count: "  << total.sale_count << "\t" << "price: " << total.price << endl;

				total.Name = trans.Name;	
				total.sale_count = trans.sale_count;
				total.price = trans.price;
			}	
		}
		cout <<"Name: " << total.Name << "\t" << "sale_count: "  << total.sale_count << "\t" << "price: " << total.price << endl;
		ofs <<"Name: " << total.Name << "\t" << "sale_count: "  << total.sale_count << "\t" << "price: " << total.price << endl;
	}
	else{

		cout << "error: no input!" << endl;



	}
	ofs.close();

	// ifs.close();cout << "ifs is closed" << endl;

}
