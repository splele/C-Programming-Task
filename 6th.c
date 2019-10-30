#include <stdio.h>
 
int main()
{
    int number, sum=0, rem=0,tempNumber;
    printf("-----------------------------------------\n     ANGSTORM NUMBER CHECKER                  \n----------------------------------------- ");    
    printf("\nEnter an integer number: ");
    scanf("%d", &number);
 printf("\n========================================\n ");
    tempNumber=number;
 
    while(tempNumber!=0)
    {
        rem=tempNumber%10;
        sum=sum + (rem*rem*rem);
        tempNumber/=10;
    }  
 
/* checking number is armstrong or not */ 
    if(sum==number)  
        printf("%d Is an Armstrong number.",number);
    else
        printf("%d Is not an Armstrong number.",number);
 
    printf("\n========================================\n ");
    return 0;
}