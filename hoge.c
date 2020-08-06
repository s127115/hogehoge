#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
	char name[100];
	int i,cnt;

	printf("Who are you?\n> ");
	scanf("%s",name);
	printf("Hello, %s!\n",name);

	for(i=1; i<=3; i++){
		if(rand()%2) {
			printf("Round %d: Heads\n",i);
			cnt++;
		}
		else		printf("Round %d: Tails\n",i);

	}
	printf("Heads: %d, Tails %d\n",cnt,i-cnt-1);
	if(cnt>i-cnt-1)	printf("%s won!\n",name);
	else		printf("%s lose!\n",name);	

	return 0;
}
