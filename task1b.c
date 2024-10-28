#include <stdio.h>

int main() {
    int N, i = 1;
    printf("enter number of rows : ");
    scanf("%d", &N);

    while (i <= N) {
    int j = 1;
    while (j <= N - i) {
            printf(" ");
            j++;
        	}
      while (j <= N) {
            printf("*");
            j++;
        		}
       printf("\n");
        i++;
    		}

    		return 0;
			}

