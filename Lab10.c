#include<stdio.h>
void main(){
    char c;
    int a,b;
    printf("Enter any operator : ");
    scanf("%c",&c);
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);

    switch(c){
        case '+':
        printf("Sum = %d",a+b);
        break;

        case '-':
        printf("Diff = %d",a-b);
        break;

        case '*':
        printf("product = %d",a*b);
        break;
        case '/':
        printf("quotient = %d",a/b);
        break;

        case '%':
        printf("Remainder = %d",a%b);
        break;

        default:
        printf("INVALID OPERATOR!");
    }

}