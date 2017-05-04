#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
#define SIZE 10000
int main()
{
    int a[SIZE],b[SIZE],c[SIZE],lena,lenb,lenc,i,j,x;
    char a1[SIZE],b1[SIZE];
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));
    cin>>a1>>b1;
    if (b1[0]=='0') {cout<<"0";return 0;}    //判断乘数是不是0 
    lena=strlen(a1);lenb=strlen(b1);
    for(i=0;i<=lena-1;i++) a[lena-i]=a1[i]-48;  //将乘数放入a数组 
    for(i=0;i<=lenb-1;i++) b[lenb-i]=b1[i]-48;   //将另一个乘数放入b数组 
    for (i=1;i<=lena;i++)
    {
        x=0;    //存放进位 
        for (j=1;j<=lenb;j++)     
        {
            c[i+j-1]=a[i]*b[j]+x+c[i+j-1];   //当前乘积+上次乘积进位+原数 
            x=c[i+j-1]/10;
            c[i+j-1]%=10;
        }
        c[i+lenb]=x;    //进位 
    }
    lenc=lena+lenb;
    while (c[lenc]==0&&lenc>0) lenc--;   //除去前导0 
    for (i=lenc;i>=1;i--)
     cout<<c[i];
     cout<<endl;
     return 0;
} 
