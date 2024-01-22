#include<stdio.h>

int main(){
    int top=-1;
    int a[20];
    int n;
    printf("\n enter the size of the stack:");
    scanf("%d",&n);
    int end=1;

    while(end){
    printf("1. Push \n 2. Pop \n 3. Peek \n 4. Display \n Enter choice");
    int choice;
    scanf("%d",&choice);
    switch(choice){
        case 1: if (top==n-1) printf(" \n overflow \n");
                else {
                    top++;
                    int x;
                    printf(" \n enter the element to be pushed: \n");
                    scanf("%d",&x);
                    a[top]=x;
                }break;
        
        case 2: if(top==-1) printf("\n underflow \n");
                
                else {
                    a[top]=0;
                    top--;
                }
                break;
                
        case 3: printf("the element at the top is %d \n",a[top]);break;

        case 4 : if(top==-1) printf("the stack is empty \n");
                
                else{
                    for(int i =top;i>=0;i--){
                        printf("%d \n",a[i]);
                    }
                    
                }
                break;
        default : end=0;
                    break;
        }

        }
    }

    
