#include "iostream"
using namespace std;

#define SIZE 5

char num[12] = { '2', '3', '4', '5', '6', '7', '8', '9', 'J', 'Q', 'K', 'A'};
char color[4] = {'d', 'c', 'h', 's'};
	
int f_num(char c)
{
	int i = 0;
	for(i = 0; i < 12; i++)
	{
		if(c == num[i])
		{
			return i;
		}
	}
	return -1;
}

int f_color(char c)
{
	int i = 0;
	for(i = 0; i < 4; i++)
	{
		if(c == color[i])
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int i = 0, j = 0;
	char carr[SIZE][2];
	
	for(i = 0; i < SIZE; i++)
	{
		cin >> carr[i][0] >> carr[i][1];
	} 
	
	char ctemp[2];
	for(i = 0; i < SIZE; i++)
	{
		for(j = i+1; j < SIZE; j++)
		{
			if(f_num(carr[i][0]) > f_num(carr[j][0]))
			{
				ctemp[0] = carr[i][0];
				ctemp[1] = carr[i][1];
				carr[i][0] = carr[j][0];
				carr[i][1] = carr[j][1];
				carr[j][0] = ctemp[0];
				carr[j][1] = ctemp[1];
			}
			else if(f_num(carr[i][0]) == f_num(carr[j][0]))
			{
				if(f_color(carr[i][1]) > f_color(carr[j][1]))
				{
					ctemp[0] = carr[i][0];
					ctemp[1] = carr[i][1];
					carr[i][0] = carr[j][0];
					carr[i][1] = carr[j][1];
					carr[j][0] = ctemp[0];
					carr[j][1] = ctemp[1];
				}
			}
		}
	}
	for(i = 0; i < SIZE; i++)
	{
		cout << carr[i][0]<<carr[i][1] <<" ";
	} 
	return 0;
} 
