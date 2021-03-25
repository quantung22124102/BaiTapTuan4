#include<iostream>
#include<math.h>
using namespace std;
int test(int x)
{
	if(n<2)
	{
		return 0;
	}
	else
	{
		for(int i=2;i<=sqrt(x);i++)
		{
			if(n%i==0)
			{
				return 0;
			}
			return 1;
		}
	}
}
int main()
{
	int x;
	cout<<"nhap x= ";
	cin>>x;
	cout<<test(x);
	return 0;
}
