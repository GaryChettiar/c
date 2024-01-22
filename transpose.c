#include<stdio.h>

int main(){

    int a[6][3]={{0,1,1},{0,3,2},{1,3,3},{2,0,4},{2,3,1}};
    int b[3][6] = {0};
    for(int i=0; i<6; i++){
        for(int j =0; j<6; j++){
            b[i][j]= a[j][i];
        }
    }

    for(int i=0; i<3; i++){
        for(int j =0; j<6; j++){
           printf("%d ",b[i][j]);
        }
        printf("\n");
    }
}