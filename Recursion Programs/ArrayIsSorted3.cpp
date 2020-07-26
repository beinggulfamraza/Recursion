#include<iostream>
using namespace std;
bool isSorted(int a[],int n)
{
	if(n==0||n==1)
	{
		return true;
	}
	if(a[n-2]>a[n-1])
	{
		return false;
	}
	int smallans=isSorted(a,n-1);
	return smallans;
}
int main()
{
	int a[]={1,2,3,4,5};
	int ans=isSorted(a,5);
	if(ans)
	{
		cout<<"Sorted"<<endl;
	}
	else
	{
		cout<<"Not Sorted"<<endl;
	}
	return 0;
}