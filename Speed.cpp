#include<iostream>
using namespace std;
int main()
{
	int v , u , a ,speed ;
	cout<<"Enter the initial and final speed and accelaration :";
	cin>>a>>v>>u;
	speed = (v*v - u*u)/(2*a);
	cout<<"Speed is :"<<speed<<endl;
	return 0;
	
}
