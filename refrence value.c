#include<stdio.h>

void add(int *a,int *b)
{
int sum = *a + *b;
*a = sum;
}

int main()
{
    int num1 = 2;
    int num2 = 5;

    add(&num1, &num2);
    printf("%d", num1);
}