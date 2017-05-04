#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    int lena = strlen(a);
    int lenb = strlen(b);
    if(lena!=lenb){
        printf("N");
        return 0;
    }
    int sum1=0, sum2=0;
    for(int i=0; i<lena; i++){
        if(a[i]>='a' && a[i]<='z'){
            a[i]-=('a'-'A');
        }
        if(b[i]>='a' && b[i]<='z'){
            b[i]-=('a'-'A');
        }
        sum1+=a[i]-'A';
        sum2+=b[i]-'A';
    }
    if(sum1==sum2){
        printf("Y");
    }else{
        printf("N");
    }
    return 0;
}
