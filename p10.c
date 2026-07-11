  // Grade

#include<stdio.h>

int main() {

int English,physics,chemistry,EE,hindi, sum,percentage;

    printf("Enter English no :");
    scanf("%d",&English);

    printf("Enter physics no :");
    scanf("%d",&physics);

    printf("Enter chemistry no :");
    scanf("%d",&chemistry);

    printf("Enter EE no :");
    scanf("%d",&EE);

    printf("Enter hindi no :");
    scanf("%d",&hindi);
  
    sum = English + physics + chemistry + EE +hindi;

   percentage = (sum)/5;

   
   printf("The grade is :",percentage);

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
