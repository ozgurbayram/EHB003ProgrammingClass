#include "stdio.h"


int main(){
	int sum = 0;
	for(int i = 0;i<=200;i++){
		if(i%3==0 && i%5==0){
			sum +=i;
			printf("%d \n",i);
		}
	}
	printf("The sum is:%d \n",sum);
}
