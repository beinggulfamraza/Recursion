#include<iostream>
using namespace std;
int sumofdigits(int n)
{
	//Base Case
	if(n==0)
	{
		return 0;
	}
	//Recursive Case
	int smallans=sumofdigits(n/10);
	int last_digit=n%10;
	//Calculation
	return smallans+last_digit;
}
int main()
{
	int n;
	cin>>n;
	int ans=sumofdigits(n);
	cout<<ans<<endl;
	return 0;
}