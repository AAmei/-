#include "iostream"
using namespace std;

#define SIZE 40
int main()
{
	int n;
	cin>>n;
	int arr[SIZE] = 0;
	arr[0] = 1;
	for(int i = 0; i < n; i++)
	{
		arr[i] = 1;
		for(int j = 0; j <= n; j++)
		{
			cout<<arr[j]<<" ";
		}
	}
	return 0;
}
