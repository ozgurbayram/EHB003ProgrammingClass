#include <stdio.h>

int main(int argc,char *argv[]){
	int a=0;
	int b=1;
	int sum=0;
	while(sum<40){
		int c = a+b;
		if(c/2==0){
			sum += c;
		}
		a=b;
		b=c;
	}

	printf("%d",sum);

	return 0;
}
