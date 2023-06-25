#include<iostream>
using namespace std;
int main()
{
	string str;
	cout<<"My I Know Your Name :";
//	cin>>str;
	getline(cin,str);
	cout<<"Hello"<< " "<<str<<endl;
	return 0;
}
