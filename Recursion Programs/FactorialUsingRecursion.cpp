#include<iostream>
using namespace std;
int fact(int n)
{
	if(n==0) //base case
	{
		return 1;
	}
	int smallans=fact(n-1); //recursive case
	return n*smallans;
}
int main()
{
	int n;
	cin>>n;
	int ans=fact(n);
	cout<<ans<<endl;
	return 0;
}