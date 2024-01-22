#include<stdio.h>

int main(){
    int b[6][3]={{0,3,3},{0,4,5},{1,1,2},{1,4,7},{2,0,1},{2,2,2}};
    int i,j,count;
    int row=0,column=0;
    for(i=0;i<6;i++){
        if(b[i][0]>b[i+1][0]){
            row=b[i][0]+1;
        }
        if(b[i][1]>b[i+1][1]){
            column=b[i][1]+1;
        }
        
    }
   
    int a[row][column];
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            a[i][j]=0;
        }
    }
    for(i=0;i<6;i++){
        
            a[b[i][0]][b[i][1]]=b[i][2];
        
    }
    for(i=0;i<row;i++){
        for(j=0; j<column; j++){
            printf("%d \t",a[i][j]);
        }
    printf("\n");
    }
}