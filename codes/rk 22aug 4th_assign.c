#include<stdio.h>
int main() {
	int dp1,dp2;
	printf("**************Addition of two polynomial in two variable************\n\n");
	printf("Enter the data for first polynomial\n\n");
	printf("enter the no. of terms in first polynomial ");
	scanf("%d",&dp1);
	int i, c1[dp1],ex1[dp1],ey1[dp1];
	// data input of first polynomial
	for(i=0; i<dp1; i++) {
		printf("\nenter the coefficient of x and y=");
		scanf("%d",&c1[i]);
		printf("enter the power of x =");
		scanf("%d",&ex1[i]);
		printf("enter the power of y =");
		scanf("%d",&ey1[i]);
	}
	printf("\n");
	for(i=0; i<dp1; i++) {
		printf("%d (x^%d y^%d)\t",c1[i],ex1[i],ey1[i]);
	}
	printf("\n");
	printf("\nEnter the data for second polynomial\n\n");
	printf("enter the no. of terms in first polynomial ");
	scanf("%d",&dp2);
	int c2[dp2],ex2[dp2],ey2[dp2];
	// data input of first polynomial
	for(i=0; i<dp2; i++) {
		printf("\nenter the coefficient x and y=");
		scanf("%d",&c2[i]);
		printf("enter the power of x =");
		scanf("%d",&ex2[i]);
		printf("enter the power of y =");
		scanf("%d",&ey2[i]);
	}
	printf("\n\n");
	for(i=0; i<dp2; i++) {
		printf("%d (x^%d y^%d)\t",c2[i],ex2[i],ey2[i]);
	}
	printf("\n\n");
	int y;
	y=dp2;

	int sum[dp1+dp2],j;
	// output

	printf("\n output \n");
	for(i=0; i<dp1; i++) {
		int b=0;
		sum[i]=0;
		for(j=0; j<dp2; j++) {
			if(ex1[i]==ex2[j]&&ey1[i]==ey2[j]) {
				sum[i]=c1[i]+c2[j]+sum[i];
				printf("%d (x^%d y^%d)\t",sum[i],ex2[j],ey2[j]);
				c2[j]=0;
				b=1;
			}
		}
		if(b==0) {
			printf("%d (x^%d y^%d)\t",c1[i],ex1[i],ey1[i]);
		}

	}
	if(dp2>dp1) {
		j=j-1;
		while(j>=0) {
			if(c2[j]!=0)
				printf("%d (x^%d y^%d)\t",c2[j],ex2[j],ey2[j]);
			j--;
		}
	}

}
