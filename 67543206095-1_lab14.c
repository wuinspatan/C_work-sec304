#include <stdio.h>
#include <string.h>

int main() {

    //--| YOUR CODE HERE
    int n[7] ;
    int ss = sizeof(n) / sizeof(n[0]) ;

    //Input 
    printf( "Enter value: " ) ;
    for ( int i = 0 ; i < ss ; i++ ) {
        scanf( "%d" , &n[ i ] ) ;
    }//end for

    //Process find min max numbers
    int min = n[0] ;
    int max = n[0] ;
    for ( int x = 0 ; x < ss ; x++ ) {
        if ( min >= n[x] ) {
            min = n[x] ;
        }//ed if
        if ( max <= n[x] ) {
            max = n[x] ;
        }//end if
    }//end for

    //Output
    printf( "Index:  " ) ;
    for (int d = 0 ; d < ss ; d++ ) {
        printf( "%-3d" , d ) ;
    }//end for
    printf( "\n" ) ;
    printf( "Array: " ) ;
    for (int d = 0 ; d < ss ; d++ ) {
        printf( "%-2d " , n[d] ) ;
    }//end for
    printf( "\n" ) ;
    printf("Min : %d\n", min ) ;
    printf("Max : %d\n", max ) ;
    
    return 0 ;
}//end main function