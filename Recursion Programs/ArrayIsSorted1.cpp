#include<iostream>
using namespace std;
bool isSorted(int a[],int size)
{
	//Base Case
	if(size==0||size==1)
	{
		return true;
	}
	if(a[0]>a[1])
	{
		return false;
	}
	//Recursive Case
	int isSmallerSorted=isSorted(a+1,size-1);
	return isSmallerSorted;
	/*
	if(isSmallerSorted)
	{
	 return true;
	}
	else
	{
	 return false;
	}
	*/
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