#include <iostream>
using namespace std;  
  
int main()  
{  
    int i = 0, j;  
    int k = 0;
    cin >> k;
    int missile[k];
    int sequence[k];
    for(i = 0; i < k; i++)
    {
    	cin >> missile[i];
    	sequence[i] = 1;
    }
   
	for(i = 1; i < k; i++){
		for(j = 0; j < i; j++){
			if(missile[i] <= missile[j])
				if(sequence[i] < sequence[j]+1)
					sequence[i] = sequence[j]+1;	
		}
	} 
   int max = -1;
   for(i = 0; i < k; i++)
	{
		if(max < sequence[i])max = sequence[i];
	}
	cout << max; 
    return 0;  
}  
