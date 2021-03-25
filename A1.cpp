#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int x=8,y=9;
	char c[10];
	int a[100];
	char b[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		cin.ignore();
	}
	for(int i=0;i<n;i++)
	{
		cin.getline(b[i],10);
	}
	for(int i=0;i<n;i++)
	{
		cout<<&a[i]<<"\t"<<(void *)&b[i]<<endl;
	}
	return 0;
}
