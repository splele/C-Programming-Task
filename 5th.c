#include<stdio.h>
 main()
{

    printf(" ------------------------------------------------");
    printf("   \n     * Number Reversal Program *  \n ");
    printf("-------------------------------------------------");
    int n,r,rev=0,x;

    printf("\n Enter A Number :");
    scanf("%d",&n);
    for ( n ;n > 0;n=n/10)

    {
       r=n%10;
        rev=rev*10+r;
    }
printf("======================================================");
    printf("\nReverse Of Entered Number is :%d",rev);
printf("\n=====================================================");

return 0;
}
