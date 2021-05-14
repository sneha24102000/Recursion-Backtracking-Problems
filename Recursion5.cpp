//TOWER OF HANOI

#include<iostream>
using namespace std;

	towerOfHanoi(int n,char src,char dest,char helper)
	{
		towerOfHanoi(n-1,src,helper,dest);
		cout<<"Move from"<<src<<"to"<<dest<<endl;
		towerOfHanoi(n-1,helper,dest,src);
	}
	
	int main()
	{
		towerOfHanoi(5,'A','C','B');
	}

