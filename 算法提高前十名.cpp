#include "iostream"
using namespace std;

#define SIZE 200
int main()
{
	int n = 0;
	int i = 0, j = 0;
	int arr[SIZE] = {0};
	cin >> n;
	for(i = 0; i < n; i++)
	{
		cin >> arr[i];
	}


	int temp = 0;
	for(i = 0; i < 10; i++)
	{
		for(j = i+1; j < n; j++)
		{
			if( arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	for(i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
