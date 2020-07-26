#include<iostream>
using namespace std;
bool elePresent(int a[],int n,int x)
{
	//Base Case
	if(n==0)
	{
		return false;
	}
	if(a[0]==x)
	{
		return true;
	}
	//Recursive Case
	int smallans=elePresent(a+1,n-1,x);
	return smallans;
}
int main()
{
	int a[5]={1,2,3,4,5};
	int ans=elePresent(a,5,3);
	if(ans)
	{
		cout<<"Element Found"<<endl;
	}
	else
	{
		cout<<"Element Not Found"<<endl;
	}
	return 0;
}