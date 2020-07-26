#include<iostream>
using namespace std;

void print1(int n)
{
	//Base Case
	if(n==0)
	{
		return;
	}
	cout<<n<<endl;
	//Recursive Case
	print1(n-1);
	return;
}
int main()
{
	int n;
	cin>>n;
	print(n);
}