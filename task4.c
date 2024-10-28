#include <stdio.h>

int main() {
    int num_of_cities;
    printf("Enter the number of cities : ");
    scanf("%d", &num_of_cities);

    int population[10];
    int min, max;
    float average_population, total_population = 0;

    for (int i = 0; i < num_of_cities; i++) {
        printf("Enter the population of city %d: ", i + 1);
        scanf("%d", &population[i]);

        total_population += population[i];

        if (i == 0) {
            min = population[i];
            max = population[i];
        } else {
            if (population[i] < min) {
                min = population[i];
            }
            if (population[i] > max) {
                max = population[i];
            }
        }
    }

    average_population = total_population / 10 ;

    for (int i = 10 - 1; i >= 0; i--) {
     printf("City in reverse  %d: %d\n", i + 1, population[i]); }
    printf("Average population of all cities: %.2f\n", average_population);
    printf("Minimum population: %d\n", min);
    printf("Maximum population: %d\n", max);
    return 0;
}



