#include<iostream>
using namespace std;
int power(int x,int n)
{
	//Base Case
	if(n==0)
	{
		return 1;
	}
	//Recursive Case
	int smallans=power(x,n-1);
	//Calculation
	return x*smallans;
}
int main()
{
	int x,n;
	cin>>x>>n;
	int ans=power(x,n);
	cout<<ans<<endl;
}