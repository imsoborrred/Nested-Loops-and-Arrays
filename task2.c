#include <stdio.h>
	int main(){

        int N, seconds, S = 0, M = 0;
        printf("enter minutes : ");
        scanf("%d", &N);
        seconds = N * 60;
        	for(int i=0; i<=seconds; i++){
               	printf("%02d:%02d", M, S);
		printf("\n");
                S++;
                if(S == 60){
                        S = 0;
                        M++;
                }
        }
        return 0;
}
