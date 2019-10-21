#include<stdio.h>
main()
{   printf("\n..................................................");
    printf("             \nTEMPERATURE CONVERTER          ");
    printf("\n..................................................");
    printf("\n\nWhat You Wanna Do?\n\n1.CELCIUS to FARENHEIT\n\n2.FARENHEIT to CELCIUS");
    int cho;
    scanf("%d",&cho);
    printf("\n-----------------------------------------------------------");
    float degfer1=0,degfer2=0,degfer3=0;
    float degcel1=0,degcel2=0,degcel3=0;
    switch (cho)
    {
        case 1 :printf("\nEnter Temperature In Degree Celcius :");

                float degcel=0;
                scanf("%f",&degcel);
                degfer1= degcel*9;
                degfer2= degfer1/5;
                degfer3= degfer2+32;
                printf("\n=======================================================");
                printf("\nTemperature in Degree Fahrenheit =%f",degfer3);
                printf("\n=======================================================");
                break;
        case 2: printf("\nEnter Temperature In Degree Fahrenheit: ");

                float degfer=0;
                scanf("%f",&degfer);
                degcel1= degfer-32;
                degcel2= degcel1*5;
                degcel3= degcel2/9;
                printf("\n=======================================================");
                printf("\nTemperature in Degree Celcius  =%f",degcel3);
                printf("\n=======================================================");
                break;


    }







}
