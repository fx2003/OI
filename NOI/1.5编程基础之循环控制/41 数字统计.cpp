#include<iostream>
using namespace std;
int main()
{
	int l,r;
	long int count = 0;
	cin >> l >> r;
	for(int i=l;i<=r;i++)
	{
		int t = i;
		while(t!=0)
		{
			if(t%10 == 2)
				count++;
			t /= 10;
		}
	}
	cout<< count <<endl;
	return 0;
}
