#include<stdio.h>

 int main(int argc, char const *argv[])


{
    char name[10];
    int age;
    long double num;
    printf("-----------------------------------------------");
    printf("\nEnter Your Name:");
    scanf("%s",&name);
    printf("-----------------------------------------------");
    printf("\nEnter Your Age:");
    scanf("%d",&age);
    printf("-----------------------------------------------");
    printf("\nEnter Your Phone Number:");
    scanf("%Lf",&num);
    printf("-----------------------------------------------");


    printf("\n->Your Name Is:%s",name);
    printf("\n->Your Age Is:%d",age);
    printf("\n->Your Phone Number Is:%Lf",num);
    printf("\n-----------------------------------------------");







}
