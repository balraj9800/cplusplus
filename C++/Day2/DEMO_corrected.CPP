#include<iostream.h>
#include<conio.h>
#include<string.h>
class Employee
{
	public:
	int id;
	char name[10];
	//string name;

	float salary;
};


void main(){

Employee e1=new Employee();
clrscr();
cout<<"\nEmployee detail";
e1.id=1200;
//e1.name="Raju";
e1.name[0]='R';
e1.name[1]='a';
e1.name[2]='j';
e1.name[3]='u';
e1.salary=25000.50;
cout<<"\nID:"<<e1.id<<"\nNAME:"<<e1.name<<"\nSALARY:"<<e1.salary;
getch();
}
