#include<iostream>
using namespace std;
int main()
{
	int age ;
	cout<<"Enter the age :";
	cin>>age;
	
	if(age >= 12 && age <= 50)//compung conditional statement 
	{
		cout<<"Young"<<endl;
	}
	else
	{
		cout<<"Not Young"<<endl;
	}
	return 0;
}