#include "iostream"
using namespace std;
int main()
{
	int i, j;
	int n;
	cin >> n;
	cout <<"..$";
	for(i = 0; i < n*4-1; i++)
	{
		cout << "$";
	}
	cout << "$..\n";
	for(i = n; i > 0; i--)
	{
		cout <<"..$";
		for(j = 0; j < i*4-1; j++)
		{
			cout << ".";
		}
		cout << "$..\n";
		cout << "$$$.$";
		for(j = 0; j < (i-1)*4-1; j++)
		{
			cout << "$";
		}
		cout << "$.$$$\n";
	}
	return 0;
} 
