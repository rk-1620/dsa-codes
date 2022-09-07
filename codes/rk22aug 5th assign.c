
#include<stdio.h>
int main(){
    printf("**************Multiplication of two polynomial************\n\n");
    printf("Enter the data for first polynomial\n\n");
    int dp1;
    printf("Enter the degree(highest power) first polynomial\n");
    scanf("%d",&dp1);
    int i,x1[dp1];
    // data input of first polynomial
    for(i=1;i<=dp1;i++){
        printf("enter the coefficient of x to the power %d =",i-1);
        scanf("%d",&x1[i]);
    }
    for(i=1;i<=dp1;i++){
       printf("%d (x^%d)\t",x1[i],i-1);
    }printf("\n");
    printf("Enter the data for second polynomial\n\n");
    printf("Enter the degree (highest power) first polynomial = ");
    int dp2;
    scanf("%d",&dp2);
    int x2[dp2];
    int y=dp2;
    // data input of second polynomial
    for(i=1;i<=dp2;i++){
        printf("enter the coefficient of x to the power %d = ",i-1);
        scanf("%d",&x2[i]);
    }
    for(i=1;i<=dp2;i++){
       printf("%d (x^%d)\t",x2[i],i-1);
    }printf("\n");
    if(dp1>=dp2){
        dp2=dp1;
    }
    // sum f the polynomial
    int sumx1[dp1+dp2],sumx2[dp1+dp2],j;
    printf("\n multiplication of polynomial is \n");
    for(i=1;i<=dp1;i++){
        for(j=1;j<=dp2;j++){
            printf("%d x^%d\t",x1[i]*x2[j],i-1+j-1);
        }

}
}
