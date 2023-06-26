#include<iostream>
using namespace std;
int main()
{
	int rollno ;
	cout<<"Enter the rollno :";
	cin>>rollno;
	
	if(rollno > 0)
	{
		cout<<"roll no is valid"<<endl;
	}
	else
	{
		cout<<"invalid roll no"<<endl;
	}
	return 0;
}