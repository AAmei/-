#include<cstdio>  
int is_leap(int x)  
{  
    if(x%400==0||(x%4==0&&x%100!=0))  
        return 1;  
    return 0;  
}  
int main()  
{  
    int y;  
    if(scanf("%d",&y)!=EOF)  
    {  
        if(is_leap(y))  
            printf("yes");  
        else printf("no");  
    }  
    return 0;  
}  
