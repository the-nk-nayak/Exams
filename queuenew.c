// Online C compiler to run C program online
#include <stdio.h>
#define maxsize 10
int queue[maxsize];
int choice, rear = -1, front; 

int dequeue()
{
    if(front>=rear)
    {
        printf("Queue is Empty");
    }
    else
    {
        int n = queue[front];
        printf("Removed  Element from Queue is %d", &n);
        front++;
    }
   
}
int display()
{
    if(front>rear)
    {
        printf("Queue is Empty");
    }
    else{
    printf("Printing the element");
    for(int i=rear;i<=front;i++)
    {
    printf("%d\n", queue[i]);
    }
    
    }
}

int main() { 
printf("\n#################### Queue implementation ###################\n");
printf("Select the choice friom below\n");
printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
scanf("%d", &choice);
    switch(choice)
        {
            case 1 : enqueue(); break;
            case 2 : dequeue(); break;
            case 3 : display(); break;
        }
while (choice != 4);
}
int enqueue()
{ int n;
    if(rear==maxsize-1)
    {
        printf("\nQueue is Full\n");
    }
    else 
    {
        printf("\nEnter the Element to be inserted\n");
        scanf("%d", &n);
        rear++;
        queue[rear] = n;
    }
}
