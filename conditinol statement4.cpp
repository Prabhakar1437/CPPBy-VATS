#include<iostream>
using namespace std;
int main()
{
	int age ;
	cout<<"Enter the age :";
	cin>>age;
	
	if(age < 12 || age > 50)//compung conditional statement 
	{
		cout<<"Eligiable for offer"<<endl;
	}
	else
	{
		cout<<" Not Eligiable for offer"<<endl;
	}
	return 0;
}