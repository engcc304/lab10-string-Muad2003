/*
    จงเขียนโปรแกรมเพื่อรับคำจากผู้ใช้งาน เพื่อตรวจสอบว่า คำที่กรอกมามีลักษณะเป็นคำหรือวลีที่สามารถอ่านจากหลังไปหน้าหรือหน้าไปหลังแล้วยังคงความหมายเหมือนเดิมได้
    โดยที่ หากคำนั้นสามารถอ่านจากหน้าไปหลังหรือหลังไปได้ ให้แสดงผลลัพธ์ว่า Pass แต่หากทำไม่ได้ให้ขึ้นว่า Not Pass

    Test case:
        Enter word:
            radar
    Output:
        Pass.

    Test case:
        Enter word:
            hello
    Output:
        Not Pass.

    Test case:
        Enter word:
            Radar
    Output:
        Pass.

    Test case:
        Enter word:
            here
    Output:
        Not Pass.
*/

#include <stdio.h>
#include <string.h>

int main() {
    
    char word[ 100 ] ;

    printf("Enter word:\n");
    scanf ( "%s", &word ) ;
    int countstr = strlen( word ) ;
    
    char swapword[ 100 ] ;
    for ( int i = 0 ; i < countstr ; i++ ) {
        swapword[ i ] = word[ countstr - 1 - i ] ;
    } // end for
    swapword[ countstr ] = '\0' ;
    int ans = strcmp( word , swapword ) ;
    if ( ans == 0 ) printf ( "Pass." ) ;
    else printf ( "Not Pass." ) ;
    
    return 0 ;
}