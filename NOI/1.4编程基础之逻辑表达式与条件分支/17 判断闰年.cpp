#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int y;
	cin>>y;
	if((y%400==0)||((y%4==0)&&(y%100!=0)))
		cout<<"Y"<<endl;
	else
		cout<<"N"<<endl;
	return 0;
}
