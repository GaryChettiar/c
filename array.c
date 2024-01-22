#include<stdio.h>
void display(int n , int arr[]){
        for(int i =0; i < n; i++)
            printf("\n %d", arr[i]);
}
void main(){
    int a[10] = {1,5,6,6,9,3};
    int n =6;
    display(n,a);
}