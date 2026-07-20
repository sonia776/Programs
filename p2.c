#include<stdio.h>

int main() {

//simple interest


int Principal , Rate , Time , SimpleInterest ;

  printf("Enter the principal amount : ");
    scanf("%d",&Principal);

    printf("Enter the Rate of interest : ");
    scanf("%d",&Rate);

    printf("Enter time in years : ");
    scanf("%d",&Time);


  SimpleInterest = (Principal * Rate * Time)/100;

  printf("Simple interest : %d ",SimpleInterest);

  
    return 0;
}
