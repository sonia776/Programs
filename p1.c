//percentage of the students

#include<stdio.h>

int main() {

    int English , physics ,chemistry , EE , hindi , sum , percentage;

    printf("Enter English no :");
    scanf("%d",&English);

    printf("Enter physics no :");
    scanf("%d",&physics);

    printf("Enter chem no :");
    scanf("%d",&chem);

    printf("Enter EE no :");
    scanf("%d",&EE);

    printf("Enter hindi no :");
    scanf("%d",&hindi);

    sum = Eng+phy+chem+EE+hindi;

    printf("the sum of all the subject is %d \n",sum);

    percentage= (sum)/5;

    printf("the percentage of the students is %d",percentage);

    return 0;
}
