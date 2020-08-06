#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
	int i,cnt=0;

	srand((unsigned)time(NULL));
	printf("Tossing a coin...\n");

	for(i=1; i<=3; i++){
		if(rand()%2) {
			printf("Round %d: Heads\n",i);
			cnt++;
		}
		else		printf("Round %d: Tails\n",i);

	}
	printf("Heads: %d, Tails %d\n",cnt,i-cnt-1);
	return 0;
}
