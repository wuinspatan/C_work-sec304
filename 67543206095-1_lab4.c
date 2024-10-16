#include <stdio.h>

int main() {

    //--| YOUR CODE HERE
    char ID[ 10 ] ;
    float hrs ;
    float salaryperhrs ;

    //Input Data
    printf( "Input the Employees ID(Max. 10 chars): " ) ;
    scanf( "%s", ID ) ;
    printf( "Input the working hrs: " ) ;
    scanf( "%f", &hrs ) ;
    printf( "Salary amount/hr: " ) ;
    scanf( "%f", &salaryperhrs ) ;
    printf( "\n" ) ;
    //Process
    float totalmoney = hrs * salaryperhrs ;

    //Output Data
    printf( "Expected Output:\n" ) ;
    printf( "Employees ID = %s\n", ID ) ;
    printf( "Saraly = U$ %.2f\n",  totalmoney ) ; 

    return 0 ;
}//end main function