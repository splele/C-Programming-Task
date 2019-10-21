#include<stdio.h>
main()
{
    printf(".................................");
    printf("      \n       FACTORIAL PROGRAM        ");
    printf("\n.................................");
    printf("\n\n\nEnter A Number:");
    int num;
    scanf("%d",&num);
    int i,fac=1;
    printf("======================================");
    for (i=1;i<=num;++i)
    {

        fac=fac*i;


    }
    printf("\nFactorial Of Entered Number =%d",fac);
    printf("\n======================================");











}
