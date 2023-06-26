#include<iostream>
using namespace std;
int main()
{
	cout<<"##### :- MANU ##### \n";
	cout<<"1.ADD\n"<<"2.Subtract\n"
	<<"3.Multiply\n"<<"4.Division\n"<<"5.Modulus\n";
	int option;
	cout<<"Enter your choice :";
	cin>>option;
	int a , b, c;
	cout<<"Enter two no. :";
	cin>>a>>b;


switch(option)
{
	case 1 : c = a + b;
	break;
	case 2 : c = a - b;
	break;
	case 3 : c = a * b;
	break;
	case 4 : c = a / b;
	break;
	case 5 : c = a % b;
	break;
	
}
cout<<"Result is :"<<c<<endl;
	return 0;
}