#include<iostream>
#include<fstream>
using namespace std;

istream& func(istream& is){
	int i;
	int index = 0;
	auto is_state = is.rdstate();
	while(!is_state){
		is >> i;

		is_state = is.rdstate();

		if(!is_state){
			cout << "this is the " << ++index << "th run." << endl;
			cout << i << "\t" << endl;
			cout << endl;
			// 为什么这边会多运行一次?? confusing 啊
			// why this run again after inputing "eof"
			// fk 要先进行操作，在进行状态判断
			// first is>>i; next is_state = is.rdstate();
			 
			// is.clear(1);		
			/*
			if (is.fail()){
				cerr << "Data Error! Please try again" << endl;
				is.clear();
				// is.ignore(100,"\n");
				continue;
			}
			*/
		}

	}
	is.clear();
	// cout << i << endl;
	return is;
}





int main(){
// ofstream ofs;
istream& is(cin);
//ofs.clear();
//cout << ofs.rdstate() << endl;
func(is);
return 0;
}


