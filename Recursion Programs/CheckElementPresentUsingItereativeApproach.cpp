#include<iostream>
using namespace std;
bool elePresent(int a[],int n,int x,int i)
{
	//Base Case
	if(i==nq)
	{
		return false;
	}
	if(a[i]==x)
	{
		return true;
	}
	//Recursive Case
	int smallans=elePresent(a,n,x,i+1);
	return smallans;
}
int main()
{
	int a[]={1,2,3,4,5};
	int ans=elePresent(a,5,5,0);
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
