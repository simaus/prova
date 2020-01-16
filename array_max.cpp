#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int max,a;
	printf("quanti elementi vuoi inserire? ");
	scanf("%d",&a);
	int v[a];
	srand((unsigned)time(NULL));
	for(int i=0; i<a; i++){
		v[i]=rand()%100;
		printf("|%d| \n",v[i]);
		if(v[i]>max){
			max=v[i];
		}
	}
	printf("il massimo e': %d", max);

	return 0;
}
