#include<stdio.h>
#include<math.h>
int main(){
    int a,sum = 0,temp,r;
    printf("\n Enter number: ");
    scanf("%d",&a);
    temp = a;
    while(a>0){
        r = a%10;
        sum = sum + r*r*r;
        a = a/10;
    }
    if(temp == sum){
        printf("The number is an Armstrong.");
    }else{
        printf("the number is not an Armstrong.");
    }
  
    return 0;
}