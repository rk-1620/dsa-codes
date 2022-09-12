#include<stdio.h>
int main(){
printf("enter the data in 2D array\n");
int arr[10][10],r,c,l,m,nz;

printf("enter the row of matrix = ");
scanf("%d",&r);
printf("enter the column of matrix = ");
scanf("%d",&c);

printf("enter the total number of non zero elements =  ");
scanf("%d",&nz);
int i,j,k,e;

for(l=0;l<r;l++){
    for(m=0;m<c;m++){
    	arr[l][m]=0;
	}
}

for(k=1;k<=nz;k++){
	printf("enter the elments %d with row,column,and value respectively = ",k );
	scanf("%d %d %d",&i,&j,&e);
	arr[i][j]=e;
}

printf("\n matrix \n");

for(l=0;l<r;l++){
    for(m=0;m<c;m++){
		printf("%d\t",arr[l][m]);
	}
    printf("\n");
}

printf("\n transpose \n");
for(l=0;l<c;l++){
    for(m=0;m<r;m++){
       printf("%d\t",arr[m][l]);
    }
    printf("\n");
}

}


