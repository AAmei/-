#include "iostream"
using namespace std;

int main()
{
	int n = 0, max = -100000, min = 1000000;
	int num;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> num;
		if(max < num)
		{
			max = num;
		}
		if(min > num)
		{
			min = num;
		}
	}

	cout << max << " " << min;
	return 0;
} 
