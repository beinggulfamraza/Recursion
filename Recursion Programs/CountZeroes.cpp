#include<iostream>
using namespace std;
int countzeroes(int n)
{
	//Base Case
	if(n==0)
	{
		return 0;
	}
	int smallans=countzeroes(n/10);
	int last_digit=n%10;
	if(last_digit==0)
	{
		return smallans+1;
	}
	else
	{
		return smallans;
	}
}
int main()
{
	int n;
	cin>>n;
	int ans=countzeroes(n);
	cout<<ans<<endl;
	return 0;
}