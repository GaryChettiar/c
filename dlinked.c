#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* rlink;
    struct node* llink;
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
        p->rlink=NULL;
    }

    else{
        p->rlink=head;
        p->data=x;
        head=p;
    }
}

void delete_front(){
    struct node* temp;
    if(head==NULL){
        printf("list is empty");
    }
    else if(head->rlink==NULL){
        printf("the deleted element is %d",head->data);
        temp=head;
        head=NULL;
        free(temp);
    }

    else {
        printf("the deleted element is %d",head->data);
        temp = head;
        head=temp->rlink;
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
        p->rlink=NULL;
    }

else{
    temp=head;
    while(temp->rlink!=NULL){
        temp=temp->rlink;
    }
    temp->rlink=p;
    p->llink=temp;
    p->data=x;
    p->rlink=NULL;
    }
}

void delete_rear(){
    struct node* temp;
    struct node* temp2;
    if(head==NULL){
        printf("list is empty");
    }
    else if(head->rlink==NULL){
        printf("the deleted element is %d",head->data);
        temp=head;
        head=NULL;
        free(temp);
    }

    else {
        temp=head;
        while(temp->rlink->rlink!=NULL){
            temp=temp->rlink;
        }
        temp2 = temp->rlink;
        printf("the deleted element is %d",temp2->data);
        temp->rlink=NULL;
        free(temp2);
    }
}

void display_front(){
    struct node* temp;
    if(head==NULL){
        printf("list is empty");
    }
    else{
        temp=head;
        while(temp!=NULL){
            printf("%d\t",temp->data);
            temp=temp->rlink;
        }
    }
}

void display_rear(){
    struct node* temp;
    if(head==NULL){
        printf("list is empty");
    }
    else{
        temp=head;
        while(temp->rlink!=NULL){
            temp=temp->rlink;
        }
        while(temp!=head){
            printf("%d\t",temp->data);
            temp=temp->llink;
        }
        
        printf("%d",head->data);
    }
}

int main(){
    insert_front();
    insert_rear();
    display_front();
    insert_rear();
    display_rear();
    return 0;
}