#include<iostream>
using namespace std;

const int size = 100;

int arr[size][size];
int brr[size][size] = {0};
int crr[size][size] = {0};

int max(int a, int b, int c)
{
	int temp = a > b? a:b;
	return temp>c? temp:c;
}

int getmax(int n, int r,int c)
{
	if(brr[r][c] == 1)
	{
		return crr[r][c];
	}
	if(n == (r+1))
	{
		brr[r][c] = 1;
		crr[r][c] = arr[r][c];
		return arr[r][c];
	}

	int temp =  max(arr[r][c] + getmax(n,r+1,c),
		       arr[r][c] + getmax(n,r+1,c+1),
		       arr[r][c] + getmax(n,r+1,c+2));
	brr[r][c] = 1;
	crr[r][c] = temp;

	return temp;
}

int main()
{
	int n;
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < (2*i+1); j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<getmax(n,0,0);
	return 0;
}
