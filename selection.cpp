#include<stdio.h>                       //Creating the Smallest Function 
int smallest( int a[], int n, int i){
    int small, pos, j;                                                  
    small = a[i];
    pos = i;
                                        //Loop starts
    for(j = i+1; j<n; j++)
    {
        if (a[j] < small)
        {
            small = a[j];
            pos = j;
        }
    }
return pos;
}
                                        //Main Codes Starts here
int main(){
    int a[10] = {90,60,80,20,36,54,399,78,59,63};
    int i, pos, temp;
    for(i = 0; i<10; i++ ){
        pos = smallest(a, 10, i);                               
        temp = a[i];                     //Swapping code starts here
        a[i] = a[pos];
        a[pos] = temp;
    }
    printf("\n**************** Printing the Sorted Elements ****************\n");
    
                                         //getting to the loop for the i
for(i = 0; i<10; i++)
{
    printf("%d\n", a[i]);
}
}