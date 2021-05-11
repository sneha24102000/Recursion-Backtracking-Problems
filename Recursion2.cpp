// PRINT NUMBERS TILL N
//BOTH IN INCREASING ORDER AND DECREASING ORDER

#include<iostream>
using namespace std;

void dec(int n)
{
	if(n==0)
	{
		return ;
	}
	
	cout<<n<<endl;
	dec(n-1);
}

void inc(int n)
{
	if(n==1)
	{
		cout<<"1"<<endl;
		return;
		
	}
	
	int(n-1);
	cout<<n<<endl;
}

int main()
{
	int n;
	cin>>n;
	dec(n);
	return 0;
}
