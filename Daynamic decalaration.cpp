#include<iostream>
using namespace std;
int main()
{
	int a = 10 , b = 5;
	//if (true)
	if(int c = a + b; c>10)
	{
		//int c = a + b;
		cout<<"fine"<<endl;
	}
	//cout<<c<<endl; value of c is not visible 
	//because this limited to if block
	cout<<a<<" "<<b<<endl;
	//cout<<c<<endl; c is limited to if block only 
	//outside if there is no c this is called daynamic declaration.
}