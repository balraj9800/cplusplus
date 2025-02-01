#include<iostream>
#include<string>
using namespace std;
class Employee{
    public:
	int id;
	  
	float salary;
};


int main(){
	
Employee e1;	
std::cout<<"\nEmployee detail";
e1.id=1200;
e1.name="Raju";
e1.salary=25000.50;
std::cout<<"\nID:"<<e1.id<<"\nNAME:"<<e1.name<<"\nSALARY:"<<e1.salary;
	
return 0;
}
