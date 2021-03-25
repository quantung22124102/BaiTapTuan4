#include<iostream>
using namespace std;
int main()
{
	//a.
	int x=5;
	int &y=x;
	y++;
	cout<<x<<endl;
	//b.khong the khai bao tham chieu ma chua chieu thoi mot bien thuong.
	//c.
	int z=8;
	int &t=x;
	t=z;z++;
	cout<<t;
	//khi khai bao %t=z thi chuong trinh bao loi.
	return 0;
}
