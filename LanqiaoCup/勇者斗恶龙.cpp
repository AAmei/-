#include<iostream>
using namespace  std;

const int size = 100;
int *head = (int *)malloc(sizeof(int)*size);
int *knight= (int *)malloc(sizeof(int)*size);

int* cmax(int *arr,int n)//从大到小排序
{
	int i, j, temp, tempmax, *temparr;

	temparr = arr;

	for(i = 0; i < n; i++)
	{
		tempmax = temparr[i];
		for(j = i; j < n; j++)
		{
			if(tempmax < temparr[j])
			{
				temp = tempmax;
				tempmax = temparr[j];
				temparr[j] = temp;
			}
		}
		temparr[i] = tempmax;
	}
	return arr;
}

int main()
{
	int m = -1, n = -1, i, j, tempmax, temp, sum = 0;

	while(1)
	{
		do
		{
			cin>>n>>m;
			if(n == m && m == 0)break;
		}while(!(1<=n && n<=20000 && 1<=m && m <=20000));
		if(n == m && m == 0)break;
		for(i = 0; i < n; i++)
		{
			cin>>head[i];
		}
		for(i = 0; i < m; i++)
		{
			cin>>knight[i];
		}

		head = cmax(head,n);
		knight = cmax(knight,m);
		
		i = m; j = n; sum = 0;
		while(i>j)
		{
			if(head[j-1] <= knight[i-1])
			{
				sum += knight[i-1];
				i--;
				j--;
			}
			else
			{
				i--;
			}
			if(j==0||i==0)break;
		}

		
		if((j==0 && i!=0)||(j==0 && i==0 && head[0]<= knight[0]))
		{
			cout<<sum<<endl;
		}
		else
		{
			cout<<"Loowater is doomed!"<<endl;
		}
	}

	//while(1);
	return 0;
}
