#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* link;
};

struct node* head=NULL;

void insert_front(){
    int x;
    printf("ENter the data to be inserted: ");
    scanf("%d",&x);
    struct node* p;
    p=malloc(sizeof(struct node));
    if(head==NULL){
        head=p;
        p->data=x;
        p->link=NULL;
    }

    else{
        p->link=head;
        p->data=x;
        head=p;
    }

}


void delete_front(){
    struct node* temp;
    if(head==NULL){
        printf("list is empty");
    }
    else if(head->link==NULL){
        printf("the deleted element is %d",head->data);
        temp=head;
        head=NULL;
        free(temp);
    }

    else {

        printf("the deleted element is %d",head->data);
        temp = head;
        head=temp->link;
        free(temp);

    }
}


void insert_rear(){
     struct node* temp;
     int x;
    printf("ENter the data to be inserted: ");
    scanf("%d",&x);
     struct node* p;
     p=malloc(sizeof(struct node));

    if(head==NULL){
        head=p;
        p->data=x;
        p->link=NULL;
    }
else{temp=head;
    while(temp->link!=NULL){
        temp=temp->link;
    }
    temp->link=p;
    p->data=x;
    p->link=NULL;
    }
}

void delete_rear(){
    struct node* temp;
    struct node* temp2;
    if(head==NULL){
        printf("list is empty");
    }
    else if(head->link==NULL){
        printf("the deleted element is %d",head->data);
        temp=head;
        head=NULL;
        free(temp);
    }

    else {
        temp=head;
        while(temp->link->link){
            temp=temp->link;
        }
        temp2 = temp->link;
        printf("the deleted element is %d",temp2->data);
        temp->link=NULL;
        free(temp2);
        
    }
}

void display(){
    struct node* temp;
    if(head==NULL){
        printf("list is empty");
    }
    else{
        temp=head;
        while(temp!=NULL){
            printf("%d\t",temp->data);
            temp=temp->link;
        }
    }
}

int main(){
    display();
    insert_front();
    insert_front();
    display();
    insert_rear();
    insert_rear();
    display();
    delete_rear();
    display();

    return 0;
}