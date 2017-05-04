#include<iostream>
using namespace std;
int main()
{
	int n, m, x, i, j, *p, temp;
	cin>>n;
	
	for(i = 0; i < n; i++)
	{
		cin>>m>>x;
		p = new int[m];
		for(j = 0; j < m; j++)
		{
			cin>>*(p+j);
		}
		while(x != 0)
		{
			temp = *p;
			for(j = 0; j < m-1; j++)
			{
				*(p+j) += *(p+j+1)%100;
			}
			*(p+m-1) += temp%100;
			x--;
		}
		for(j = 0; j < m; j++)
		{
			cout<<*(p+j)<<" ";
		}
		cout<<endl;

	}
	return 0;
}
