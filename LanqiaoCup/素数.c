#include<stdio.h>
#include<math.h>

int main()
{
	int a, b, i, j, sscount = 0, t, k;
	scanf("%d %d",&a, &b);
	if(a > b)
	{
		t = a;
		a = b; 
		b = t;
	}
	if(a<3)
	{
		t = 3;
		printf("2 ");
		sscount = 1;
	}else if(a > 3 && a%2 == 0)
	{
		t = a+1;
	}else
	{
		t = a;
	}
	for(i = t; i <= b; i += 2)
	{
		k = (int)sqrt(i);
		for(j = 2; j <= k; j++)
		{
			if(i%j!=0)continue;
			else break;
		}
		if(j ==(k+1))
		{
			sscount = 1;
			printf("%d ", i);
		}
		
	}

	if(sscount == 0)
		printf("\n");


	while(1);
	return 0;
}
