#include<iostream>
using namespace std;
int multiply(int m,int n)
{
	//Base Case
	if(n==0)
	{
		return 0;
	}
	//Recursive Case
	int smallans=multiply(m,n-1);
	//Calculation
	return smallans+m;
}
int main()
{
	int m,n;
	cin>>m>>n;
	int ans=multiply(m,n);
	cout<<ans<<endl;
	return 0;
}