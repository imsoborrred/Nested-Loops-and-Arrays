#include <stdio.h>
#include <stdlib.h>

int main() {

    int xt = rand() % 10;
    int yt = rand() % 10;

   	 for (int i = 0; i < 10; i++) {
         for (int j = 0; j < 10; j++) {
                if (i == xt && j == yt) {
                printf("Hurrah! I have found the hidden treasure\n");
	        printf("Treasure coordinates: (%d, %d)\n", xt, yt);
		printf("Current coordinates: (%d, %d)\n", i, j);


               			 break;
            }
       	   }
       }

    return 0;
}





