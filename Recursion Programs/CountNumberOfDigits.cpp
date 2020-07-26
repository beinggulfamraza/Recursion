#include<iostream>
using namespace std;
int countdigits(int n)
{
	//Base Case
	if(n==0)
	{
		return 0;
	}
	//Recursive Case
	int smallans=countdigits(n/10);
	//Calculation
	return smallans+1;
}
int main()
{
	int n;
	cin>>n;
	int ans=countdigits(n);
	cout<<ans<<endl;
	return 0;
}