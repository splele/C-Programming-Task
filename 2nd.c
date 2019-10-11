#include<stdio.h>

main ()

{
    printf("    CELSIUS O FAHRENHEIT CONVERTER       ");
    printf("\n-----------------------------------------------------");



    printf("\nEnter The Temperature In Degree Celsius:");
    float degcel=0;
    scanf("%f",&degcel);
    float degfer1=0,degfer2=0,degfer3=0;
    degfer1= degcel*9;
    degfer2= degfer1/5;
    degfer3= degfer2+32;
    printf("\n-----------------------------------------------------");
    printf("\nTemperature in Degree Fahrenheit =%f",degfer3);
    printf("\n-----------------------------------------------------");







}
