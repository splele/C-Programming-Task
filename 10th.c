#include<stdio.h>
int main()
{printf("               PYRAMID FORMER                ");
printf("\n-----------------------------------------------------");
    printf("\nEnter A Number To See Its Pyramid:");
    
int i, j,n;
scanf("%d",&n);
printf("\n================================================\n");
for(i = 1; i <= n; i++)
{
for(j = i; j <= n; j++)
{
printf("%d",j);
}
printf("\n");
}
printf("\n================================================");
return 0;}
