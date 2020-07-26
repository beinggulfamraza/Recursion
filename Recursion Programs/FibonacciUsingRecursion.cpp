#include<iostream>
using namespace std;
int fib(int n)
{
	//Base Case
	if(n==0)
	{
		return 1;
	}
	if(n==1)
	{
		return 1;
	}
	//Induction Hypothesis
	int smallans1=fib(n-1);
	int smallans2=fib(n-2);
	//Calculation
	return smallans1+smallans2; //fib(n)=fib(n-1)+fib(n-2)
}
int main()
{
	int n;
	cin>>n;
	int ans=fib(n);
	cout<<ans<<endl;

}