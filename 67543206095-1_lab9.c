#include <stdio.h>

//Create function to find PRIME number
int is_prime(int num) { 
    /// return 1 if PRIME
    /// return 0 if NOT PRIME
    if ( num <= 1 ) {
        return 0 ; // Not prime
    } else if ( num == 2 ) {
        return 1 ; // 2 is prime
    } else if ( num >= 3 ) {
        for ( int i = 2 ; i * i <= num ; i++ ) { // Check up to the square root of num
            if ( num % i == 0 ) {
                return 0 ; // Not prime if divisible by i
            }
        }//end for i 
        return 1 ; 
    }//end if
    return 0 ; 
}//end is_prime function

int main() {
    int n ;

    // INPUT for the number of values
    printf( "Enter N : " ) ;
    scanf( "%d", &n ) ;

    int index[ n ] ; 

    // Loop to input values
    for ( int i = 0 ; i < n ; i++ ) {
        printf( "Enter Value[%d] : ", i ) ;
        scanf( "%d", &index[i] ) ; // Read integers directly
    }//end for i

    // OUTPUT Index
    printf( "Index: " ) ;
    for ( int i = 0 ; i < n ; i++ ) {
        printf( " %-2d", i ) ; //Print Index with spacing
    }//end for i
    printf( "\n" ) ; 

    // OUTPUT Array
    printf( "Array: " ) ;
    for ( int i = 0 ; i < n ; i++ ) {
        if ( is_prime( index[i] ) ) {
            printf( "%-4d", index[i] ) ; // Print the prime number
        } else {
            printf( "#  " ) ; // Print # for non-prime numbers
        }//end if-else
    }//end for i 
    printf( "\n" ) ;

    return 0 ;

}//end main function
