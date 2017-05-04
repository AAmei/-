#include "iostream"
using namespace std;
#define SIZE 9
int main()
{
	int arr[SIZE];
	int i = 0;
	int x[3], y[3], z[2];//分别记录每行，每列，对角线的和 
	for(i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	for(i = 0; i < 3; i++)
	{
		x[i] = arr[i*3] + arr[i*3 + 1] + arr[i*3 + 2];
	}
	for(i = 0; i < 3; i++)
	{
		y[i] = arr[0 + i] + arr[3 + i] + arr[6 + i];
	}
	z[0] = arr[0] + arr[4] + arr[8];
	z[1] = arr[2] + arr[4] + arr[6];
	
	int myprint = 0;
	if(x[0] == x[1] && x[0] == x[2] && 
	   x[0] == y[0] && x[0] == y[1] && x[0] == y[2] &&
	   x[0] == z[0] && x[0] == z[1])
	   myprint = 1;
	cout << myprint;
	return 0;
} 
