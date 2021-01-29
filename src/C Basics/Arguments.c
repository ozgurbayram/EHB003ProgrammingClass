#include <stdio.h>

int main(int argc,char *argv[]){
	if(argc == 1){
		printf("Please give more arguments\n");	
	}	
	else if(argc>1 && argc<4){
		printf("Here is your arguments\n");
		for(int i = 0;i<argc;i++){
			printf("%s",argv[i]);	
		}	
		printf("\n");
	}
	else{
		printf("You have too many argument");		
	}
	return 0;
}
