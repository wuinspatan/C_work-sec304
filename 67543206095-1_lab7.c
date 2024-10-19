#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int play = 0 ; 
    int guess, answer, score ;
    int min = 1 , max = 100 ;

    srand(time(NULL));

    do {
        printf("Do you want to play game (1=play, -1=exit) : ") ;
        scanf("%d", &play) ;

        if (play == 1) {
            score = 100 ;
            answer = 42 ; 

            printf("(Score=%d)\n" , score);

            do {
                
                printf("Guess the winning number (%d-%d): ", min, max) ;
                scanf("%d" , &guess) ;

                if (guess == answer) {
                    printf("That is correct! The winning number is %d.\n" , answer) ;
                    printf("Score this game: %d\n" , score) ;
                    break; 
                } else if ( guess > max ){
                    printf( "Your guess is out of the current bounds (%d-%d)! Try again.\n" , min , max ) ;
                } else if ( min > guess ){
                    printf( "Your guess is out of the current bounds (%d-%d)! Try again.\n" ,min , max ) ;
                } else {
                    score -= 10 ; 

                    if (guess > answer) {
                        printf("Sorry, the winning number is LOWER than %d. (Score=%d)\n" , guess , score) ;
                        if ( guess > max ) {
                        max = max ;
                        } else {
                        max = guess - 1 ;
                        } // end if else
                    } else {
                        printf("Sorry, the winning number is HIGHER than %d. (Score=%d)\n" , guess , score) ;
                        if ( guess < min ) {
                        min = min ;
                        } else {
                        min = guess + 1 ;
                        } // end if else
                    }

                    if (score == 0) {
                        printf("Game over! You've run out of score.\n") ;
                        break ;
                    }
                }
            } while (guess != answer) ; 
        }

    } while (play != -1) ;
    return 0 ;
}