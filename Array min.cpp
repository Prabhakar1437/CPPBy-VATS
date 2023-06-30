#include<iostream>
using namespace std;
int main()
{
	int min = INT_MAX;
	int A[7] = {2,3,4,7,9,55,22};
	for(int i=0; i<7;i++)
	{
		if(A[i]<min)
		{
			min = A[i];
			
		}
	}
	
	
	cout<<min<<endl;
	return 0;
}