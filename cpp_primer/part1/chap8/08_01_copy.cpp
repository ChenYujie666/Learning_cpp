#include<iostream>
using namespace std;


istream &func(istream &is)
{
    int num;
	auto old_state = is.rdstate();
	while(is.eof() != true) {
			        is >> num;
					        cout << num << endl;
							    }
//								    is.clear();
									    return is;
										}
										int main(void)
										{
										    func(cin);
											    return 0;
												}
