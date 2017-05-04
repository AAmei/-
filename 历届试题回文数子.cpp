#include <stdio.h>  
int f(int *a,int k)  //判断是否为回文数   
{  
    int i,j;  
    for (i=0,j=k-1;i<k/2,j>=k/2;i++,j--)  
    {  
        if (a[i]!=a[j])  
        return 0;  
    }  
    return 1;  
      
}  
int main()  
{  
    int n,i,j,a[6],s=0,t,k=0,x,y=1;  
    scanf("%d",&n);  
    if(n > 54)
    {
    	printf("-1\n");  
		return 0;
    }
    for (i=10000;i<=999999;i++)    
    {  
        s=0;  
        t=i;  
        k=0;  
        while (t)  //将每位数存到a数组中   
        {  
            a[k++]=t%10;  
            t=t/10;  
            s=s+a[k-1];  
        }  
        if (s==n)  //满足和等于输入n的值，则进行判断是否是回文   
        {  
        x=f(a,k);  
        if (x)  
        {  
            y=0;   //标记，若有结果则不输出-1   
            printf("%d\n",i);  
        }  
        }  
    }  
    if (y)  
    	printf("-1\n");  
    return 0;  
}   
