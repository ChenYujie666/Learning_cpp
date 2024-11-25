#include<iostream>
#include"Sales_item.h"
using namespace std;
int main(){


	Sales_item item1, item2, item_sum;
	cin >> item1;
	item_sum = item1;
	//cin >> item2;
	while ((cin >> item2)){
	if (item1.isbn == item2.isbn)
		item_sum += item2;
	else{ 
	cout << item_sum << endl;
	item1 = item2;
	item_sum = item1;
	}	
}
	
	cout << item_sum << endl;
	//Ctrl + D or Ctrl + Z for end the input;
	cout << "end" << endl;



}
