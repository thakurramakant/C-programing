#include<stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a>=1){
        printf("The given number is natural number.");
    }else{
        printf("The number is not a natural number: ");
    }
    return 0;

}