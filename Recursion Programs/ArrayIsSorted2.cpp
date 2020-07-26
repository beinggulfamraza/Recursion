#include<iostream>
using namespace std;
bool isSorted(int a[],int size)
{
	if(size==0||size==1)
	{
		return true;
	}
	int isSmallerSorted=isSorted(a+1,size-1);
	if(!isSmallerSorted)
	{
		return false;
	}

	if(a[0]>a[1])
	{
		return false;
	}
	else
	{
		return true;
	}
}
int main()
{
	int a[]={1,9,3,4,5};
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