#include<stdio.h>
void main(){
int s;
	printf("Enter the size of matrix\t");		//SIZE OF MATRIX DEFINE BY USER
	scanf("%d",&s);

int arr1[10][10],arr2[10][10];
int l,m;
int nz1,nz2,r,c;
r=s;
c=s;
printf("enter the total number of non zero elements =  ");
scanf("%d",&nz1);
int i,j,k,e;
for(l=0;l<r;l++){
    for(m=0;m<c;m++){
    	arr1[l][m]=0;
	}
}
for(k=1;k<=nz1;k++){
	printf("enter the elments %d with row,column,and value respectively = ",k );
	scanf("%d %d %d",&i,&j,&e);
	arr1[i][j]=e;
}
	printf("\n");

	// PUTTING THE VALUES OF THE MATRIX 1 IN ROW AND COLOUMN

//int arr1[10][10],arr2[10][10];
//int l,m;
//int nz;
printf("enter the total number of non zero elements =  ");
scanf("%d",&nz2);
//int i,j,k,e;
for(l=0;l<r;l++){
    for(m=0;m<c;m++){
    	arr2[l][m]=0;
	}
}
for(k=1;k<=nz2;k++){
	printf("enter the elments %d with row,column,and value respectively = ",k );
	scanf("%d %d %d",&i,&j,&e);
	arr2[i][j]=e;
}
	printf("\n");
	int sum=0,multi[10][10];
	//Matrix Multiplication
	for(l=0;l<s;l++){
		for(m=0;m<s;m++){
			sum=0;
			for(k=0;k<s;k++){
				sum=sum+arr1[l][k]*arr2[k][m];
			}
			multi[l][m]=sum;
		}
	}
	printf("**************** FIRST MATRIX ****************\n");
	for(l=0;l<s;l++){
		for(m=0;m<s;m++){
			printf("\t%d\t",arr1[l][m]);
		}
		printf("\n");
	}
	printf("**************** SECOND MATRIX ****************\n");
	for(l=0;l<s;l++){
		for(m=0;m<s;m++){
			printf("\t%d\t",arr2[l][m]);
		}
		printf("\n");
	}
	//output
	printf("***** MULTIPLICATION OF BOTH MATRIX*****\n");
	for(l=0;l<s;l++){
		for(m=0;m<s;m++){
			printf("\t%d\t",multi[l][m]);
			//printf("0\t");
		}
		printf("\n");
	}
}

