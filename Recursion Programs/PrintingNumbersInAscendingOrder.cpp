#include<iostream>
using namespace std;
void print(int n)
{
	//Base Case
	if(n==0)
	{
		return;
	}
	//Recursive Case
	print(n-1);
	cout<<n<<endl;
	return;
}
int main()
{
	int n;
	cin>>n;
	print(n);
}