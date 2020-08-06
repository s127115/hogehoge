#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
	char name[100];

	printf("Who are you?\n> ");
	scanf("%s",name);
	printf("Hello, %s!\n",name);

	return 0;
}
