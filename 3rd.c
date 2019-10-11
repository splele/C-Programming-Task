#include <stdio.h>
 main()
{
    float P=0;
    float C=0;
    float M=0;
    float sum=0; float avg=0;
    printf("\n--------------------------------------------------");
    printf(" \n            MARKSHEET     ");
    printf("\n--------------------------------------------------");
    printf("\nEnter Marks Obtained In Physics:");
    scanf("%f",&P);
    printf("Enter Marks Obtained In Chemistry:");
    scanf("%f",&C);
    printf("\nEnter Marks Obtained In Mathematics:");
    scanf("%f",&M);
    printf("\n--------------------------------------------------");

    sum=P+C+M;
    avg= sum/3;



    printf("\nSum Of Total Marks Obtained=%f",sum);
    printf("\nAverage Of Total Marks Obtained=%f",avg);
    printf("\n--------------------------------------------------");











}
