#include<iostream>
using namespace std;
int main()
{

int n;
cout<<"Enter the value:";
cin>>n;
switch(n)
{
	case 1 :cout<<"One"<<endl;
	break;
	
	case 2 :cout<<"Two"<<endl;
	break;
	case 3 :cout<<"Three"<<endl;
	break;
	case 4 :cout<<"four"<<endl;
	break;
	case 5 :cout<<"Five"<<endl;
	break;
	default : cout<<"Invalid no.";
	cout<<endl<<endl;
	return 0;
}
}