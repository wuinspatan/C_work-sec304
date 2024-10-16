#include <stdio.h>

int main() {

    //--| YOUR CODE HERE
    int score ; // Score
    char input[ 10 ] ;
    printf( "enter score : " ) ;
    fgets( input, sizeof( input ) , stdin ) ;  // read the input as a string

    if ( sscanf(input , "%d" , &score ) != 1 ) { // convert the string input to an integer
        printf( "please enter number only.\n" ) ;
    } else if (score > 100 || score < 0) { // when input score is higher than 100 or lower than 0
        printf( "Checking Clearly your score input !!\n" ) ;
    } else if ( score >= 80 ) { // Start Checking Grade
        printf( "A !\n" ) ;
    } else if ( score >= 75 ) {
        printf( "B+ !\n" ) ;
    } else if ( score >= 70 ) {
        printf( "B !\n" ) ;
    } else if ( score >= 65 ) {
        printf( "C+ !\n" ) ;
    } else if ( score >= 60 ) {
        printf( "C !\n" ) ;
    } else if ( score >= 55 ) {
        printf( "D+ !\n" ) ;
    } else if ( score >= 50 ) {
        printf( "D !\n" ) ;
    } else {
        printf( "F !\n" ) ;
    }//end if-else
     
    return 0 ;
    
}//end main function