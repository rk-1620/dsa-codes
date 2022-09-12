#include<stdio.h>
int main(){
printf("enter the data in 2D array\n");
int r,c;
printf("enter the row of matrix");
scanf("%d",&r);
printf("enter the column of matrix");
scanf("%d",&c);
int arr[r][c];
int i,j,count=0;
for(i=0;i<r;i++){

    for(j=0;j<c;j++){
        printf("\n enter number for position [%d][%d] = ",i,j);
        scanf("%d",&arr[i][j]);
        if(arr[i][j]==0){
            count=1+count;
        }
    }
}
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
       printf("%d\t",arr[i][j]);
    }
    printf("\n");
}
if(count>r*c/2){
    printf("this is a sparse matrix");
}else
    {
        printf("this is not a sparse matrix");
    }
}
