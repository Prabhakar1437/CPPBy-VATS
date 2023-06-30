#include<iostream>
using namespace std;
int main()
{
	
	int A[7] = {2,3,4,7,9,55,22};
	int key;
	cout<<"Enter the element :";
	cin>>key;
	for(int i=0; i<7;i++)
	{
		if( key == A[i])
		{
			cout<<"found it "<<i;
			exit(0);			
		}
	}
	cout<<"Not found";
	return 0;
}