#include <stdio.h>
#include <stdlib.h>

int main() {
    int red[10][10];
    int green[10][10];
    int blue[10][10];
    int gray[10][10];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            red[i][j] = rand() % 256;
            green[i][j] = rand() % 256;
            blue[i][j] = rand() % 256;
        }
    }

    printf("Red Values:\n");
    for (int i=0; i <10; i++) {
        for (int j=0; j<10; j++) {
            printf("%3d ", red[i][j]);
        }
        printf("\n");
    }

	printf("Green Values:\n");
    for (int i=0; i<10; i++) {
        for (int j=0; j<10; j++) {
            printf("%3d ", green[i][j]);
        }
        printf("\n");
    }

	 printf("Blue Values:\n");
    for (int i = 0; i<10; i++) {
        for (int j=0; j<10; j++) {
            printf("%3d ", blue[i][j]);
        }
        printf("\n");
    }

	 printf("Grayscale Values:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            gray[i][j] =(red[i][j] * 0.299 + green[i][j] * 0.587 + blue[i][j] * 0.114);
            printf("%3d ", gray[i][j]);
        }
        printf("\n");
    }

    return 0;
}

