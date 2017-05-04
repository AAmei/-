#include <iostream>  
using namespace std;  
  
#define MOD 10007     //定义除数  
#define MAXN 1000001  //定义数组长度  
  
int n,i,F[MAXN];  
  
int main()  
{  
    cin>>n; 
    F[1] = F[2] = 1;  

    for(i = 3;i <= n;i ++)  
    {  
        //每一次都取余比最后取余 快  
        F[i] =(F[i - 1] + F[i - 2]) % MOD;  
    }  

    //此时的F(n)即为Fibonacci数列取余后的结果  
    cout<<F[n]<<endl;  
    
    return 0;  
}  
