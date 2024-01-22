#include<stdio.h>

int main(){
    int i,j,count=0,x=0;
    int a[4][5]={{0,0,0,3,5},{0,2,0,0,7},{1,0,2,0,0},{0,0,0,0,0}};
    for(i =0 ; i <4;i++){
        for(j=0;j<5;j++){
            if(a[i][j]!=0){
                count++;
            }
        }
    }
    int b[count][3];
    for(i=0; i< 4; i++){
        for(j=0; j < 5; j++){
            if(a[i][j]!=0){
                b[x][0]=i;
                b[x][1]=j;
                b[x][2]=a[i][j];
                x++;
            }
        }

    }
printf("row column value \n");
for(i =0 ; i <count;i++){
        for(j=0;j<3;j++){
           printf("%d \t",b[i][j]);
            }
            printf("\n");
        }
    }
