#include<iostream>
using namespace std;

int main(){
int curr = 0, val = 0;

if (cin >> curr){
	int cnt = 1;
	while(cin >> val){
		if (curr == val){
			cnt++;
		}
		else {
			cout << curr << " occurs " << cnt << " times." << endl;
			cnt = 1;
			curr = val;	
		}
		
	}
	


}





return 0;
}
