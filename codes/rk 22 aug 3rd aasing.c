#include<stdio.h>
int main(){
    printf("**************Addition of two polynomial************\n\n");
    printf("Enter the data for first polynomial\n\n");
    int dp1;
    printf("Enter the degree(highest power) first polynomial\n");
    scanf("%d",&dp1);
    int i,x1[dp1];
    // data input of first polynomial
    for(i=0;i<=dp1;i++){
        printf("enter the coefficient of x to the power %d =",i);
        scanf("%d",&x1[i]);
    }
    printf("Enter the data for second polynomial\n\n");
    printf("Enter the degree (highest power) first polynomial = ");
    int dp2;
    scanf("%d",&dp2);
    int x2[dp2];
    // data input of second polynomial
    for(i=0;i<=dp2;i++){
        printf("enter the coefficient of x to the power %d = ",i);
        scanf("%d",&x2[i]);
    }
    if(dp1>=dp2){
        dp2=dp1;
    }
    // sum f the polynomial
    int sum[dp1+dp2];
    for(i=0;i<=dp2;i++){
    		sum[i]=x1[i]+x2[i];
       		printf("%d_x^%d\t",sum[i],i);
	}

}
