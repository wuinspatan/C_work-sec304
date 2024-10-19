/*
    จงเขียนเรียงข้อมูลจากน้อยไปมากจากข้อมูลดังต่อไปนี้
        { 15, 7, 25, 3, 73, 32, 45 }
    จากนั้นทำการระบุตำแหน่งของหมายเลข 32 หลังจากตัวเลขต่างๆ ถูกจัดเรียงเรียบร้อยแล้ว
    หมายเหตุ : กำหนดให้ทำทุกอย่างภายในฟังก์ชันการทำงานหลัก (ห้ามเขียนฟังก์ชันย่อย)

    Test case & Output:
        Old Series : 15, 7, 25, 3, 73, 32, 45
        New Series : 3, 7, 15, 25, 32, 45, 73
        Pos of 32 : 4
*/

#include <stdio.h>

int main() {

    //--| YOUR CODE HERE
    int num[] = { 15, 7, 25, 3, 73, 32, 45 } ;
    int s = sizeof(num) / sizeof(num[0]) ; 

    int i, j ;
    int temp ;

    printf("Old Series : ") ;
    for ( i = 0 ; i < s ; i++ ) {
        printf( "%d", num[i] ) ;
        if ( i < s - 1 ) {
            printf( ", " ) ;
        }
    }

    for ( i = 0 ; i < s - 1 ; i++ ) {
        for ( j = 0 ; j < s - 1 ; j++ ) {    
            if ( num[j] > num[j + 1] ) {
                temp = num[j] ;
                num[j] = num[j + 1] ;
                num[j + 1] = temp ;
            }
        }
    }

    printf("\nNew Series : ") ;
    for ( i = 0 ; i < s ; i++ ) {
        printf( "%d", num[i ]) ;
        if (i < s - 1) {
            printf( ", " ) ;
        } 
    }

    int a = 32 ;
    for ( int x = 0 ; x < s ; x++ ) {
        if ( num[x] == a ) {
            printf( "\nPos of %d : %d " ,num[x], x ) ;
            printf( "\n" ) ;
            break ;
        }
    }
    return 0 ;
}//end main function