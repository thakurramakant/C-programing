#include<stdio.h>
int main(){
    int a,b;
    printf("Enter First number: ");
    scanf("%d",&a);

    printf("\n Enter Second number: ");
    scanf("%d",&b);

    if(a>b){
        printf("\nThe Maximum number you entered is: %d",a);
    }else{
        printf("\nThe Maximum number you entered is: %d",b);
    }
    return 0;
}