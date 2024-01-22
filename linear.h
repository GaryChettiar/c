void linearsearch(int n, int target, int a[]){
    int i,flag = 0;
    for (i=0; i< n;i++){
        if(a[i]==target){
            printf("element found at %d", i+1);flag=1;
        }
    }
    if(flag==0) printf("element not found");
}