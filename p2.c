#include<stdio.h>

int main() {

//simple interest


int P , R , T , SI;

  printf("Enter the principal amount :");
    scanf("%d",&P);

    printf("Enter the Rate of interest :");
    scanf("%d",&R);

    printf("Enter time in years :");
    scanf("%d",&T);


  SI= (P * R * T)/100;

  printf("The SI is %d",SI);

  
    return 0;
}
