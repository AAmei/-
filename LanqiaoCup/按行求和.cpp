#include<iostream>
using namespace std;

int main()
{
	int m;
	cin>>m;
    int j;
	for(j=0;j<m;j++)
	{
	int n;
	int sum = 0;
	int ele;

	cin>>n;
	for(int i = 0; i < n; i++)
	{
		cin>>ele;
		sum += ele;
	}
	cout<<sum<<endl;
	}

	return 0;
}
