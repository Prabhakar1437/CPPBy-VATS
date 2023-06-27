#include<iostream>
using namespace std;
int main()
{
	int i = 0;
	for( ; ;)// if we dono put anything
	// in for loop it become infinite loop.
	{
		cout<<i <<"Hello Vats\n";
		i++;
		if(i>10)
		break;
	}
}