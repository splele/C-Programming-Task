#include <stdio.h>
#include <string.h>

int main(){
    char string1[20];
    int i, length;
    int flag = 0;
    printf("             PALINDROME IDENTIFIER            ");
    
    printf("\n----------------------------------------------");
    printf("\nEnter a Word/Character:");
    scanf("%s", string1);
    printf("----------------------------------------------");
    printf("\n==========================================================");
    length = strlen(string1);
    
    for(i=0;i < length ;i++){
        if(string1[i] != string1[length-i-1]){
            flag = 1;
            break;
   }
}
    
    if (flag) {
        printf("\n%s Is not a Palindrome", string1);
    }    
    else {
        printf("\n%s Is a Palindrome", string1);
    }
   printf("\n==========================================================");
    return 0;

}
