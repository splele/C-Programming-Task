#include<stdio.h>
main()
{
    printf ("=========================");
    printf ("\nEnter A Number :");
    int num;
    scanf("%d",&num);
    printf ("=========================");


    int i=1;
    int tab;
    printf ("\nTable of Entered Number is:");
    for (i=1;i<=10;++i)
    {

        tab=num*i;


        printf("\n%d*%d=%d\n",num,i,tab);


    }

printf ("\n=========================");


}
