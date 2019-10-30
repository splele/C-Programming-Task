#include<stdio.h>
#include<string.h>
#define SIZE 20
 
struct bookdetail
{
          char name[20];
          char author[20];
          int pages;
          char genre[20];
 
};
 
void output(struct bookdetail v[],int n);
 
void main()
{printf("===============================================\n                  BOOK                      \n===============================================");
          struct bookdetail b[SIZE];
 
          int num,i;
          printf("\nEnter the Numbers of Books:");
          scanf("%d",&num);
          printf("\n");
          for(i=0;i<num;i++)
 
          {
 
                   printf("\t=====:Book %d Detail:=====\n",i+1);
 
                   printf("\nEnter the Book Name:\n");
                   scanf("%s",&b[i].name);
 
                   printf("Enter the Author of Book:\n");
                   scanf("%s",&b[i].author);
 
                   printf("Enter the Pages of Book:\n");
                   scanf("%d",&b[i].pages);
 
                   printf("Enter the Genre of Book:\n");
                   scanf("%s",&b[i].genre);
 
          }
 
          output(b,num);
 
}
 
void output(struct bookdetail v[],int n)
 
{
 
          int i,t=1;
 
          for(i=0;i<n;i++,t++)
 
          {
 
                    printf("\n");
                    printf("\n===========================================");
                   
                   printf("\nBook No.%d\n",t);
 
                   printf("\t\tBook %d Name =%s \n",t,v[i].name);
 
                   printf("\t\tBook %d Author =%s \n",t,v[i].author);
 
                   printf("\t\tBook %d Pages =%d \n",t,v[i].pages);
 
                   printf("\t\tBook %d Genre =%s \n",t,v[i].genre);
 
                   printf("\n");
                   printf("\n===========================================");
 
          }
 
}