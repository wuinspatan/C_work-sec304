#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int ArmstrongNum( char *number ) { // Find Armstrong number function
    int s = strlen( number ) ; // หาจำนวนหลัก
    int sum = 0 ;
    int original_num = atoi( number ) ; // แปลงค่า string -> integer สำหรับค่าต้นฉบับ
    int num = 0 ;

    for ( int i = 0 ; i < s ; i++ ) {
        num = number[i] - '0' ; // Convert char to int ของแต่ละหลัก
        sum += pow(num , s) ; // ยกกำลังตามจำนวนหลัก
    }//enn for i

    // ตรวจสอบว่าผลรวมเท่ากับตัวเลขเดิมหรือไม่
    if ( sum == original_num ) {
        return 1 ; // Armstrong num
    } else {
        return 0 ; // Not Armstrong num
    }//end if

}//end function

int main() { //main 

    char num[ 10 ] ;

    //Input num
    printf( "Enter Number: " ) ;
    scanf( "%s" , num ) ;

    int a = ArmstrongNum( num ) ; // ค่า a คือค่าจากฟังชั่น 

    if ( a ) { // a = 1 
        printf( "Pass.\n" ) ;
    } else { // a = 0
        printf( "Not Pass.\n" ) ;
    }//end if-else

    return 0 ;

}//end main function