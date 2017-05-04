#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>> n; 
	char temp;
	for(int i = 0, l = 2*n-2; i < 2*n-1; i++, l--)
	{	
		if(i < n)
		{
			for(int j = 0; j <= i; j++)
			{
				temp = 'A'+j;
				cout<<temp<<"    "; 
			}
			for(int k = 1; k < 2*n-1-2*i; k++)
			{
				cout<<temp<<"    ";
			}
			for(int j = i-1; j >=0; j--)
			{
				temp = 'A'+j;
				cout<<temp<<"    "; 
			}
		}
		else
		{
			for(int j = 0; j <= l; j++)
			{
				temp = 'A'+j;
				cout<<temp<<"    ";
			}
			for(int k = 1; k < 2*n-1-2*l; k++)
			{
				cout<<temp<<"    ";
			}
			for(int j = l-1; j >= 0; j--)
			{
				temp = 'A'+j;
				cout<<temp<"    ";
			}
		}
		cout<<endl;
	}
	return 0;
} 

