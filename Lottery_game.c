#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    //Print greetings and game instructions
    printf("\n\n\n\n\t\t\bWelcome to the Lottery game.\n");
    printf("Instructions are as follows: \n");
    printf("1. A player will get 5 chances, to guess the lottery number.\n");
    printf("2. Lottery number ranges between 1 to 10\n");
    printf("3. Even a single correct guess would mean victory.\n");
    
    char start;
    printf("Want to start the game(Y/n): ");
    start= getchar();
    

    if (start == 'y' || start == 'Y'){
        
        //Generate random number
        int random_number;
        srand(time(NULL));
        random_number= rand() % 10;

        //Start of game
        char cont;
        while(1){
            int guessed_number;
            printf("All the best.\nYou can start guessing.\n");
            for (int i=1; i<=5; i++){
                printf("Attempt %d: ",i);
                scanf("%d",&guessed_number);
                if (guessed_number== random_number){
                    printf("Congratulations! You have won the lottery.\n\n\n");
                    break;
                }
                else{
                    if (i==5){
                        printf("Sorry but you lost...Better luck next time\n\n\n");
                        continue;
                        }
                    printf("Wrong guess!! Try again.\n");
                }
            }
            printf("\nDo you want to play again??[y/n]: ");
            fflush(stdin);
            cont= getchar();
            if (cont== 'y' || cont== 'Y'){
                continue;
            }
            else{
                printf("\nThankyou for visiting\nSee You again :)\n");
                break;
            }
        }



    }
    else{
        printf("Thankyou for visiting\nSee You again :)\n");
    }
    
    
    return 0;
}