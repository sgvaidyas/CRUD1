#include<iostream>
#include "Employee.h"
#include<list>
using namespace std;

void createEmployee(list<Employee>  &EmpList)
{
	Employee ob;
	ob.setData();
	EmpList.push_back(ob);
}
void displayEmployee(list<Employee>  &EmpList)
{
	Employee ob;
	list<Employee>::iterator iter;
	for (iter = EmpList.begin();iter!=EmpList.end();++iter) 
	{
		ob = *iter;
		ob.display();
	}
}
Employee* searchEmployee(list<Employee>  &EmpList,int id)
{
	Employee ob;
	list<Employee>::iterator iter;
	for (iter = EmpList.begin();iter!=EmpList.end();++iter) 
	{
		ob = *iter;
		if(ob.empId == id)
			return &ob;
	}
	return NULL;
}
void updateEmployee(list<Employee>  &EmpList,int id)
{
	Employee *ob;
	list<Employee>::iterator iter;
	for (iter = EmpList.begin();iter!=EmpList.end();++iter) 
	{
		if(iter->empId == id)
		{			
			cout<<"\n ENTER EMPID       = ";
			cin>>iter->empId;
			cin.ignore();
			cout<<"\n ENTER EMPNAME     = ";
			getline(cin,iter->empName);
			cout<<"\n ENTER EMPSAL      = ";
			cin>>iter->sal;			
		}
	}
}


void deleteEmployee(list<Employee>  &EmpList,int id)
{
	Employee ob;
	list<Employee>::iterator iter;
	for (iter = EmpList.begin();iter!=EmpList.end();++iter) 
	{
		ob = *iter;
		if(ob.empId == id)
			iter = EmpList.erase(iter);
	}
}
