#include <stdio.h>  
#include <string.h>  
#define MAXSIZE 10000  
  
char s[MAXSIZE];  
char result[MAXSIZE];  
int p, p1, p2, p3, len;  
  
  
void operate(int i)  
{  
    int j, k, disparity;  
      
    char insert;  
      
    if(p1 == 2 && 'a'<=s[i-1] && s[i-1]<='z'){  
        insert = s[i-1] - ('a' - 'A') + 1;  
    }else{  
        insert = s[i-1] + 1;  
    }  
    if(p1 == 3){  
        insert = '*';  
    }  
      
    disparity = s[i+1] - s[i-1];  
    if(insert == '*'){  
        for(i = 1; i < disparity; i ++){  
            for(j = 0; j < p2; j ++){  
                result[p++] = insert;  
            }  
        }  
    }else{  
        if(p3 == 1){  
            for(i = 1; i < disparity; i ++, insert ++){  
                for(j = 0; j < p2; j ++){  
                    result[p++] = insert;  
                }  
            }  
        }  
        if(p3 == 2){  
            insert += disparity - 2;  
            for(i = 1; i < disparity; i ++, insert --){  
                for(j = 0; j < p2; j ++){  
                    result[p++] = insert;  
                }  
            }  
        }  
    }  
      
}  
  
int main()  
{  
      
    int i;  
      
    scanf("%d%d%d\n%s", &p1, &p2, &p3, s);  
      
      
    len = strlen(s);  
    for(i = 0; i < len; i ++){  
          
        if(s[i] != '-' || !(('0'<=s[i-1] && s[i+1]<='9') ||   
            ('a'<=s[i-1] && s[i+1]<='z'))){  
            result[p++] = s[i];  
        }else{  
              
            if(s[i+1] > s[i-1]){  
                operate(i);  
            }else{  
                result[p++] = s[i];  
            }  
        }  
    }  
      
    printf("%s", result);  
      
    return 0;     
}  
