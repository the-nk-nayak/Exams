#include<stdio.h>

#define MAXSIZE 10

int Stack[MAXSIZE];
void Push(){
    int n, Top;
    if (Top == MAXSIZE-1)
        {printf("Condition Overflow");}
    else{   
        printf("Enter the Element to be inserted");
            scanf("Value %d", &n );
            Top++;
            Stack[Top] = n;
    }   
}
void Pop()
{
    int n;

}
void Display()
{
    int n, Top;
    if (Top == 0)
    {
        printf("Condition Empty");
    }
    
}
int main(){
    int n, Top;
    printf("Stack Using Array\n");
    printf("Select from the Choice below\n 1. Push\n 2. Pop \n 3. Display \n 4. Exit\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1 :
       { Push();}
    case 2 :
       { Pop();}    
    case 3 :
       { Display();}    
    case 4 :
       { Exit();}
    default:
        break;
    }
}
