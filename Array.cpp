#include<iostream>
using namespace std;
int main()
{
	//int A[5]= {1,2,3,4,5};//declration
	// and intilization of an array.
	//int A[5]={2,3};//declaration and partial initilization
	//int A[5] = {0};
	int A[]= {1,2,3,4,5,6};//intilization without size.
	for(int x:A)
	cout<<x<<endl;
	return 0;
}