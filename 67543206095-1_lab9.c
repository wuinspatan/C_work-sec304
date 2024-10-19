#include <stdio.h>
#include <stdbool.h>

bool isPrime( int N ) {
    if ( N < 2 ) return false ;
    for ( int i = 2 ; i * i <= N ; i++ ) {
        if ( N % i == 0 ) return false ;
    }
    return true ; 
}

int main()
{
    int i , n ;

    printf("Enter N : ");
    scanf ( "%d" , &n ) ;

    int s[n];

    for ( i = 0 ; i < n ; i++ ) {
        printf("Enter value[%d] : ", i);
        scanf("%d", &s[i]);
    }

    printf("Index:  ");
    for ( i = 0; i < n; i++ ) {
        printf("%2d ", i);
    }

    printf("\nArray:  ");
    for ( i = 0 ; i < n ; i++ ) {
        if ( isPrime(s[i]) ) {
            printf("%2d ", s[i]);
        } else {
            printf("%2s ", "#");
        }
    }
    printf ( "\n" ) ;
    return 0 ;
}