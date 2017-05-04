#include "iostream"
using namespace std;
int main()
{
    int k = 0, n = 0;
    cin >> k >> n;
    
    int sum1 = 1, sum2 = 1, j = n, sum;  
    
    if(k == 0||k == n){  
        cout << '1';  
    }else {  
        for(int i = 0; i < k; i++){  
            sum1 *= n;   
            n--;  
        }  
        for(int i = 1; i <= k; i++){  
            sum2 *= i;  
        }  
        sum = sum1/sum2;  
        cout << sum;  
	} 
	return 0;
}
