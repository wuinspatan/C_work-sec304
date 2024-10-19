#include <stdio.h>
#include <string.h>
#include <ctype.h>

int CheckWord( char *word ) { // Checking a char function

    //--| YOUR CODE HERE
    int left = 0; // ตัวอักษรตัวแรก
    int right = strlen( word ) - 1 ; // ตัวสุดท้าย

    while ( left < right ) {

        // เช็คว่าตัวอักษรจากทางซ้ายไปและทางขวาไป เหมือนกันไหม
        // ใช้ tolower เพื่อ ทำให้ตัวอักษร พิมใหญ่เป็นพิมพ์เล็ก เพื่อจะง่ายต่อการ compied
        if ( tolower( word[ left ] ) != tolower( word[ right ] ) ) {
            return 0 ; // Not pass
        }//end if

        left++ ;
        right-- ;

    }//end while

    return 1 ; // Pass

}//end Checking a char Function

int main() { // Main Function

    char word[100] ; // สร้าง Array
    
    // Input a word
    printf("Enter word: ") ; 
    scanf("%s", word) ;

    // Checking in process
    if (CheckWord(word)) {
        printf("Pass.\n") ;
    } else {
        printf("Not Pass.\n") ;

    }//end if else

    return 0 ;

}//end main