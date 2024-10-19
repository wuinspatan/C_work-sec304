#include <stdio.h>
#include <string.h>

struct Student { //Structure function
    char Name[ 20 ] ;
    char ID[ 6 ] ;
    float ScoreSub[ 5 ] ;
} typedef S;

void Grade( float score[ 5 ] ) { //Calculate Students grade function
    for ( int i = 0 ; i < 5 ; i++ ) {
        if ( score[ i ] >= 80 ) {
            printf( "A " ) ;
        } else if ( score[ i ] >= 75 ) {
            printf( "B+ " ) ;
        } else if ( score[ i ] >= 70 ) {
            printf( "B " ) ;
        } else if ( score[i] >= 65 ) {
            printf( "C+ " ) ; 
        } else if ( score[i] >= 60 ) {
            printf( "C " ) ;
        } else if ( score[i] >= 55 ) {
            printf( "D+ " ) ;
        } else if ( score[i] >= 50 ) {
            printf( "D " ) ;
        } else {
            printf( "F " ) ;
        }//end if-else
    }//end loop i
    printf( "\n" ) ;
}//end grade function

void Average( float n[ 5 ] ) { //Calculate the Average of score sum
    float sum = 0;
    for ( int i = 0 ; i < 5 ; i++ ) {
        sum += n[ i ] ;
    }//end loop i
    printf( "Average Scores: %.1f" , sum / 5 ) ;
}//end Average function

int main() { //Main function
    S student[ 3 ] ;
    int ss = sizeof(student) / sizeof(student[0]) ;
    
    //Input Students Data
    for ( int i = 0 ; i < ss ; i++ ) { //start input data
        printf( "Enter the details of Student %d:\n" , i + 1 ) ;
        printf( "Name: " ) ; //input name
        fgets( student[ i ].Name , 20 , stdin ) ;
        student[ i ].Name[ strcspn( student[ i ].Name , "\n" ) ] = 0 ;  // Remove newline

        printf( "ID: " ) ; //input ID
        fgets( student[ i ].ID , 5 , stdin ) ;
        student[ i ].ID[ strcspn( student[ i ].ID , "\n" ) ] = 0 ;  // Remove newline

        for ( int j = 0 ; j < 5 ; j++ ) {
            printf( "Scores in Subject %d: ", j + 1 ) ; //input scoreSub
            scanf( "%f" , &student[ i ].ScoreSub[ j ]) ;
        }//end loop j
        getchar() ;  // Clear leftover newline
    }//enf loop i
    printf("\n") ;
    //Output Students Data
    for ( int i = 0 ; i < ss ; i++ ) {
        printf( "Student %d:\n" , i + 1 ) ;
        printf( "Name: %s\n" , student[ i ].Name ) ; //output name
        printf( "ID: %s\n" , student[ i ].ID ) ; //output ID
        printf( "Scores: " ) ; 
        for ( int j = 0; j < 5; j++ ) {
            printf( "%-2.0f" , student[ i ].ScoreSub[ j ] ) ; //output score
        }//end loop j
        printf( "\nGrades: " ) ;
        Grade( student[ i ].ScoreSub ) ; //show grade
        Average( student[i].ScoreSub ) ; //show average
        if ( i == ss - 1 ) {
            printf( "\n" ) ;
        } else {
            printf("\n\n") ;
        }
    }//end loop i

    return 0;
}//end main function