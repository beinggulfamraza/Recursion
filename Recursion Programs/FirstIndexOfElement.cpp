#include<iostream>
using namespace std;
int firstIndex(int a[],int n,int x,int i)
{
	//Base Case
	if(i==n)
	{
		return -1;
	}
	if(a[i]==x)
	{
		return i;
	}
	//Recursive Case
	int smallans=firstIndex(a,n,x,i+1);
	return smallans;
}
int main()
{
	int a[]={1,3,3,4,5};
	int ans=firstIndex(a,5,3,0);
	cout<<ans<<endl;
	return 0;
}