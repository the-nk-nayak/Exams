#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * add;    
}; struct node *start = NULL;

void create()
{   char ch;
    int n;
    printf("Enter an Element");
    scanf("%d", &n);

    start = (struct node*)malloc(sizeof(struct node)); 
    start->data = n;
    start->add = NULL;
    struct node *temp = start;

printf("\nWant to continue\n");
ch=getche();
while (ch == 'y' || ch == 'Y')
{
    printf("Enter the element to be added");
    scanf("%d", &n);
    struct node *new = (struct node*)malloc(sizeof(struct node));
    new->data = n;
    new->add = NULL;
    temp->add=new;
    temp = temp->add;
    printf("want to continue");
    ch = getche();
}

}

int main()
{
    create();
}