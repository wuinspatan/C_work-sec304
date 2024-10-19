#include <stdio.h>

void Input(char *character, int *num1, int *num2, float *float_num, char *word) {
    
    printf("Enter a character: \n" ) ;
    scanf( "%c" , character ) ;
    printf("Enter two integers: \n" ) ;
    scanf("%d %d" , num1 , num2 ) ;
    printf("Enter a floating-point number: \n" ) ;
    scanf("%f" , float_num ) ;
    printf("Enter a string: \n" ) ;
    scanf("%s" , word ) ; 
}   
 
void displayOutput(char character, int num1, int num2, float float_num, char *word) {    
   
    printf("You entered character: %c\n" , character ) ;
    printf("You entered integers: %d and %d\n" , num1, num2 ) ;
    printf("You entered floating-point number: %.2f\n" , float_num ) ; 
    printf("You entered string: %s\n" , word ) ;
}   

int main() {
    char character , string[100] ;
    int num1, num2 ;
    float float_num ;

    Input(&character, &num1, &num2, &float_num, string) ;
    displayOutput(character, num1, num2, float_num, string) ;   
   
    return 0 ;
}