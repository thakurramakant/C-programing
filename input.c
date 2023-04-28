#include<stdio.h>
int main(){
    int n;
    do{
        printf("Enter some number: ");
        scanf("%d",&n);
        printf("%d\n",n);
        
        if(n%7 == 0){
            break;
        }

    }while(1);
    printf("thankyou!");
    return 0;
}