#include<iostream>
using namespace std;
bool elePresent(int a[],int n,int x)
{
	//Base Case
	if(n==0)
	{
		return false;
	}
	if(a[n-1]==x)
	{
		return true;
	}
	//Recursive Case
	int smallans=elePresent(a,n-1,x);
	return smallans;
}
int main()
{
	int a[]={1,2,3,4,5};
	int ans=elePresent(a,5,7);
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