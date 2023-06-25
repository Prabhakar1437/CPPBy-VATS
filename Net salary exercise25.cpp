#include<iostream>
using namespace std;
int main()
{
	float basicsalary;
	float percentagealowace;
	float percentagededuction;
	float netsalary;
	
	cout<<"Enter the basicsalary :";
	cin>>basicsalary;
	cout<<"Enter the Percentage of alowance :";
	cin>>percentagealowace;
	cout<<"Enter the percentage of deduction: ";
	cin>>percentagededuction;
	netsalary = basicsalary + basicsalary*(percentagealowace/100)
	 - basicsalary*(percentagededuction/100);
	
	cout<<"Net salary is : "<<netsalary<<endl;
	return 0;
}
