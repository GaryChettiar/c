#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAXSIZE 5
void cqinsert();
void cqdelete();
void cqdisplay();
int a[MAXSIZE];
int front=-1,rear=-1;

void main()
{
int end=1;
int choice;
while(end)
{
 printf("\n1. Insert");
 printf("\n2. Delete");
 printf("\n3. Traverse");
 printf("\n\nEnter your choice [1/2/3/4] : ");
 scanf("%d",&choice);
 switch(choice)
 {
    case 1 : cqinsert();
        break;
    case 2 : cqdelete();
        break;
    case 3 : cqdisplay();
        break;
    default : end=0; break;
 }
 }
}
void cqinsert()
{
 int num;
 if(front==(rear+1)%MAXSIZE)
 {
 printf("\nQueue is Full(Queue overflow)");
 return;
 }
 printf("\nEnter the element to be inserted in circular queue : ");
 scanf("%d",&num);
 if(front==-1)
 front=rear=0;
 else
 rear=(rear+1) % MAXSIZE;
 a[rear]=num;
}

void cqdelete()
{
 int num;
 if(front==-1)
 {
 printf("\nQueue is Empty (Queue underflow)");
 return;
 }
 num=a[front];
 printf("\nDeleted element from circular queue is : %d",num);
 if(front==rear)
 front=rear=-1;
 else
 front=(front+1)%MAXSIZE;
}

void cqdisplay()
{
 int i;
 if(front==-1)
 {
 printf("\nQueue is Empty (Queue underflow)");
 return;
 }
 printf("\n\nCircular Queue elements are : \n");
 for(i=front;i<=rear;i++)
 printf("\na[%d] : %d",i,a[i]);
 if(front>rear)
 {
 for(i=0;i<=rear;i++)
 printf("a[%d] : %d\n",i,a[i]);
 for(i=front;i<MAXSIZE;i++)
 printf("a[%d] : %d\n",i,a[i]);
 }
} 