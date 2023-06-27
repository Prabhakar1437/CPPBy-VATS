#include<iostream>
using namespace std;
int main()
{
	int n , count=0 ;
	cout<<"Enter the number :";
	cin>>n;
	for(int i = 1; i<= n; i++)
	{
	  if(n%i == 0)
	  {
	  	count++;
	  }
    }
	  
	     if(count == 2)
	      {
	  	   cout<<"No. is Prime"<<endl;
	      }
	     else
	     {
	  	  cout<<"No. is not Prime"<<endl;
	  	
	     }
      
	
	
	return 0;
}