#include<stdio.h>

int main() {

//simple interest


int Principal , Rate , Time , SI;

  printf("Enter the principal amount :");
    scanf("%d",&Principal);

    printf("Enter the Rate of interest :");
    scanf("%d",&Rate);

    printf("Enter time in years :");
    scanf("%d",&Time);


  SI= (Principal * Rate * Time)/100;

  printf("The SI is %d",SI);

  
    return 0;
}
