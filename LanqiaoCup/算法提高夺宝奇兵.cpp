#include "iostream"
using namespace std;
#define SIZE 101
int map[SIZE][SIZE];
int dp[SIZE][SIZE];
int max(int a, int b)
{
	return a > b ? a : b;
}
int main()
{
	int N, i, j;
	cin >> N;
	for(i = 0; i < N; i++)
	{
		for(j = 0; j <= i; j++)
		{
			cin >> map[i][j];
		}
	}
	
	for(i = N-1; i >= 0; i--)
	{
		for(j = i; j >= 0; j--)
		{
			dp[i][j] = max(dp[i+1][j],dp[i+1][j+1]) + map[i][j];
		}
	}
	cout << dp[0][0];
	return 0;
} 
