  // Grade

#include<stdio.h>

int main() {

int English , Physics , Chemistry , EE , Hindi , Sum = 0 , Percentage ;

    printf(" Enter English no :");
    scanf("%d",&English);

    printf(" Enter Physics no :");
    scanf("%d",&Physics);

    printf("Enter Chemistry no :");
    scanf("%d",&Chemistry);

    printf("Enter EE no :");
    scanf("%d",&EE);

    printf("Enter Hindi no :");
    scanf("%d",&Hindi);
  
    Sum = English + Physics + chemistry + EE + hindi;

   percentage = (Sum)/5;

   
   printf("The grade is : ",percentage);

   if(percentage<100 && percentage>90){
 printf("A");
   }

   if(percentage<90 && percentage>80){
 printf("B");
   }

   if(percentage<80 && percentage>60){
 printf("C");
   }

   if(percentage<60){
 printf("D");
   }

    return 0;
}
