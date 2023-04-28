#include<stdio.h>
int main(){
    int n,mul = 1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
       mul = mul*i; 
    }
    printf("%d",mul);
    return 0;
}