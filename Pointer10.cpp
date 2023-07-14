#include<iostream>
using namespace std;
int main()
{
	int A[5]= {2,4,6,8,10};
	int *p = A;
	for(int i = 0; i <5; i++)
	{
		//cout<<A[i]<<endl;
		//cout<<i[A]<<endl;
		//cout<<*(A+i)<<endl;
		//cout<<*(p+i)<<endl;
		cout<<(p+i)<<endl;
	}
	return 0;
}