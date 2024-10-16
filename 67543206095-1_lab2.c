#include <stdio.h>

int main() {

    char c ;
    int n[2] ;
    float f ;
    char s[10] ;
    
    // INPUT charecter
    printf( "Input :\n" ) ;
    printf( "Enter a character: " ) ;
    scanf( "%c", &c ) ;

    // INPUT two integers
    printf( "Enter two integers: ") ;
    for ( int i = 0 ; i < 2 ; i++ ) {
        scanf( "%d", &n[i] ) ;
    }//end for 

    // INPUT float number
    printf( "Enter a floating-point number: " ) ;
    scanf( "%f", &f ) ;

    //INPUT string
    printf( "Enter a string: " ) ;
    scanf( "%s", s ) ;

    // OUTPUT
    printf("\nOutput :\n") ;
    printf( "You entered character: %c\n", c ) ;
    printf( "You entered integers: %d and %d\n", n[0] , n[1] ) ; 
    printf( "You entered floating-point number: %.2f\n", f ) ;
    printf( "You entered string: %s\n", s ) ;

    return 0 ;
}//end main function