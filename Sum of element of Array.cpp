#include<iostream>
using namespace std;
int main()
{
	int sum = 0;
	int A[] = {2,3,4,7,9,55,22,};
	for(int x:A)
	sum = sum +x;
	cout<<"Sum of element is :"<<sum<<endl;
	return 0;
}