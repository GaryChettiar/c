#include<stdio.h>

int main(){
    int a[5]={0};
    int n = sizeof(a)/sizeof(a[0]);
    int front=-1, rear =-1;
    int choice;
    int end=1;
    while(end){
        printf("1. Enqueue \n2. Dequeue \n3. Peek \n4. Display \n Enter choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1: if(rear ==n -1){
                        printf("\n Queue is full\n");
                        }
                    else{
                        int x;
                        printf("\n Enter the element to be added to the queue  :");
                        scanf("%d",&x);
                        if(front==-1) front++;
                        rear++;
                        a[rear]=x; 
                    }
                    break;

            case 2: if(front ==-1||front>rear) printf("\n Queue is empty\n");
                    else{
                        a[front]=0;
                        front++;
                    }
                    break;

            case 3: if(front ==-1||front>rear) printf("\n Queue is empty\n");
                    else printf("The element in the front is %d\n",a[front]);
                    break;
            
            case 4: if(front ==-1||front>rear) printf("\n Queue is empty\n");
                    int i;
                    for(i=0; i<rear+1; i++){
                        printf("%d\n",a[i]);
                    }
                    break;
            
            default: end=0;
                    break;
        }
    }

}