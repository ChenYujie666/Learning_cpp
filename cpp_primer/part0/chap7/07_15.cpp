#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Person{

public:
Person():name("default"), addr("default"){}


string name;
string addr;



void const eating(){cout << name << " is eating" << endl;}
void const living(){cout << name << " is living in " << addr << endl;}


};

istream &read(istream &is, Person &item){
    is >> item.name >> item.addr;
}


ostream &print(ostream &os, const Person &item){
    os << item.name <<" is living in "<< item.addr;
}

int main(){

Person cyj;
cyj.name = "CYJ";cyj.addr = "Hangzhou";
cyj.eating();
cyj.living();
Person person;
read(cin, person);
print(cout, person);

Person pr;
cout << endl;
print(cout, pr);
pr.eating();
}
