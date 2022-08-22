#include<stdio.h>
void main(){
	int s;
	printf("Enter the size of matrix\t");		//SIZE OF MATRIX DEFINE BY USER
	scanf("%d",&s);								
	printf("\n");
	int mat1[s][s];								//DECLARING THE VARABLES OF MATRIX
	int mat2[s][s];
	int multi[s][s];
	int r,c,k,sum;								// VARIBLES WHICH WE WILL BE USE FOR LOOP
	
	// PUTTING THE VALUES OF THE MATRIX 1 IN ROW AND COLOUMN
	
	printf("Enter the no for first matrix\t");
	printf("\n");
	for(r=0;r<s;r++){
		for(c=0;c<s;c++){
			printf("\nEnter the no\t %d , %d = ",r,c);
			scanf("%d",&mat1[r][c]);
		}
	}
	printf("\n");
	
	// PUTTING THE VALUES OF THE MATRIX 1 IN ROW AND COLOUMN
	
	printf("Enter the no for second matrix\t");
	printf("\n");
	for(r=0;r<s;r++){
		for(c=0;c<s;c++){
			printf("\nEnter the no\t %d , %d = ",r,c);
			scanf("%d",&mat2[r][c]);
		}
	}
	//Matrix Multiplication
	for(r=0;r<s;r++){
		for(c=0;c<s;c++){
			sum=0;
			for(k=0;k<s;k++){
				sum=sum+mat1[r][k]*mat2[k][c];
			}
			multi[r][c]=sum;
		}
	}
	printf("**************** FIRST MATRIX ****************\n");
	for(r=0;r<s;r++){
		for(c=0;c<s;c++){
			printf("\t%d\t",mat1[r][c]);
		}
		printf("\n");
	}
	printf("**************** SECOND MATRIX ****************\n");
	for(r=0;r<s;r++){
		for(c=0;c<s;c++){
			printf("\t%d\t",mat2[r][c]);
		}
		printf("\n");
	}
	//output
	printf("***** MULTIPLICATION OF BOTH MATRIX*****\n");
	for(r=0;r<s;r++){
		for(c=0;c<s;c++){
			printf("\t%d\t",multi[r][c]);
		}
		printf("\n");
	}	
}