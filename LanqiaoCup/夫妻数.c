#include<stdio.h>
int get_fact_sum(int tar){//求因数之和
	int cur_sum = 0;
	int i;
	for(i = 1; i<tar; i++){
		if(tar%i == 0){
			cur_sum+=i;
		}
	}
	return cur_sum;
}
int main(){
	int m,n;
	while(scanf("%d %d", &m, &n)!=EOF){
		if(m == 0 && n == 0)return 0;
		if(n == get_fact_sum(m) && m == get_fact_sum(n)){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}
