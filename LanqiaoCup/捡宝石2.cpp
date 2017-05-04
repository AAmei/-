#include<iostream>
using namespace std;

const int size = 100;

int brr[size][size];


int max(int a, int b, int c)
{
	int temp = a > b? a:b;
	return temp>c? temp:c;
}



int main()
{
	int n;
	cin>>n;
	int i = 0, j = 0;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < (2*i+1); j++)
		{
			cin>>brr[i][j];
		}
	}

	for(i = (n-1); i > 0; i--)
	{
		for(j = (2*i+1); j >= 0; j--)
		{
			brr[i-1][j] += max(brr[i][j],brr[i][j+1],brr[i][j+2]);
		}
	}
	cout<<brr[0][0];
	//while(1);
	
	return 0;
}
