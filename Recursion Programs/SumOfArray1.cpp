#include<iostream>
using namespace std;
int sumOfarray(int a[],int n)
{
	//Base Case
	if(n==0)
	{
		return 0;
	}
	//Recursive Case
	int smallans=sumOfarray(a+1,n-1);
	return a[0]+smallans;
}
int main()
{
	int a[]={1,2,3,4,5};
	int ans=sumOfarray(a,5);
	cout<<ans<<endl;
	return 0;
}