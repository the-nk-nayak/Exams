#include<stdio.h>
// #define i = 0            Defines the Variable for the whole program

int main(){
    int num , i ;

    printf("Enter the Number to which you want table: -  ");
    scanf("%d" , &num);

    // main codes start

    for (i = 0; i<11; i++)
    {
        printf("%d X %d = %d \n \a" , num, i, num*i );      // \a produces sound with the window



        /*
        yhaan aap kuch bhi kr sskte hein
        jitna chaahe utna likh skta ho yhan
        multline comment hai ye
        */
    }
    return 0;

}