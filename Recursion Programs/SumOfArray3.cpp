#include<iostream>
using namespace std;
int sumOfarray(int a[],int n,int i)
{
	//Base Case
	if(i==n)
	{
		return 0;
	}
	//Recursive Case
	int smallans=sumOfarray(a,n,i+1);
	return a[i]+smallans;
}
int main()
{
	int a[]={1,2,3,4,5};
	int ans=sumOfarray(a,5,0);
	cout<<ans<<endl;
	return 0;
}