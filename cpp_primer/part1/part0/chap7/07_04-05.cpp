#include<iostream>
#include<string>
#include<vector>

using namespace std;

struct Person{
string name;
bool male;
int age = 0;
string addr = "";
int birth_year = 0;
int birth_month = 0;
int birth_day = 0;

void const eating(){cout << name << " is eating" << endl;}
void const living(){cout << name << " is living in " << addr << endl;}
};

int main(){

Person cyj;
cyj.name = "CYJ";cyj.addr = "Hangzhou";
cyj.eating();
cyj.living();



}
