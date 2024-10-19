#include <stdio.h>

int main() {

    //--| YOUR CODE HERE
    int n ;
    int N[ 100 ] ;

    // INPUT
    printf( "Enter value: " ) ;
    scanf( "%d", &n ) ; //get num value

    // OUTPUT
    printf( "Series: " ) ;
    if ( n % 2 == 0 ) { //Even num series
        for ( int i = n; i >= 0; i -= 2 ) {
            printf( "%d ", i ) ;
        }//end for i backword
    }//end if

    if ( n % 2 == 1 ) { //Odd num series
        for ( int k = 1; k <= n; k += 2 ) {
            printf("%d ", k ) ;
        }//end for k 
    }//end if

    printf( "\n" ) ; //newline

    return 0 ;

}//end main function