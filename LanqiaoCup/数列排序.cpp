#include<iostream>
using namespace std;
#define MAXS 200//定义数列规模 
#define MAXA 10000//定义最大绝对值 
int sort(int *arr, int n)
{
	if(arr == NULL || n == 1)return -1; 
	int temp = MAXA;
	int tempj = 0;
	for(int i = 0; i < n; i++)
	{
		temp = MAXA;
		for(int j = i; j < n; j++)
		{
			if(temp > *(arr + j))
			{
				temp = *(arr + j);
				tempj = j;
			}
		}
		*(arr + tempj) = *(arr + i);
		*(arr + i) = temp;
	}
	return 0;
}
int main()
{
	int n, arr[MAXS];
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	
	sort(arr,n);
	
	for(int i = 0; i < n; i++)
	{
		cout<<arr[i]<<" ";
	} 
	
	return 0;
} 
