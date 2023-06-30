#include<iostream>
using namespace std;
int main()
{
	int max = INT_MIN;
	int A[7] = {2,3,4,7,9,55,22};
	for(int i=0; i<7;i++)
	{
		if(A[i]>max)
		{
			max = A[i];
			
		}
	}
	
	
	cout<<max<<endl;
	return 0;
}