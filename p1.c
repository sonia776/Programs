//percentage of the students

#include<stdio.h>

int main() {

    int English , Physics ,Chemistry , EE , Hindi , Sum = 0 , Percentage;

    printf("Enter English no :");
    scanf("%d",&English);

    printf("Enter physics no :");
    scanf("%d",&Physics);

    printf("Enter chemistry no :");
    scanf("%d",&Chemistry);

    printf("Enter EE no :");
    scanf("%d",&EE);

    printf("Enter hindi no :");
    scanf("%d",&hindi);

    Sum = English + physics + chemistry + EE + hindi;

    printf(" The sum of all the subject is %d \n",sum);

    percentage= (sum)/5;

    printf("the percentage of the students is %d",percentage);

    return 0;
}
