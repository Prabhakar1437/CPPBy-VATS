#include<iostream>
using namespace std;
int main()
{
	int a,b,c ;
	cout<<"Enter the number :";
	cin>>a>>b;
	
	if(b == 0)//compung conditional statement 
	{
		cout<<"Denominator is invalid  "<<endl;
	}
	else
	{
		c = a/b;
		cout<< c<<endl;
	}
	return 0;
}