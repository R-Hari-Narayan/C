#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 7
    int x = (rand() % 7) + 1;

    int guess;
    printf("Enter a number between 1 to 7: ");
    scanf("%d", &guess);

    if (x == guess) {
        printf("Congratulations! You won the lottery\n");
    } else {
        printf("Sorry! The lucky number was: %d\n", x);
    }

    return 0;
}





