#include<iostream>
using namespace std;

#define SUCCESS 1;
#define FAIL 0;

void mycombination(int n, int m,int )
{
	int n, m, i, j;
	int *arr;
	int *mrr;
	if(m == 0)
		return;
	for(i = n-1; i >= 0; i++)
	{
		mrr[m-1] = arr[i-1];
	}
	
	return;
}

int main()
{
	int n, m, i, j;
	int *arr;
	int *mrr;
	cin>>n>>m;
	arr = new int[n];
	for(i = 0; i < n; i++)
	{
		*(arr+i) = i+1;
	}
	




	while(1);
	return 0;
}
