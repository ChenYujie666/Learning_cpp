#include"06_08_Chaper6.h"
int fact(int n){
	int p = 1;
	for(int i = 1; i != n+1; i++){
		p *= i;
	}
	return p;
}

