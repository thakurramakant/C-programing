#include<stdio.h>
int main(){
    int a;
    printf("Enter your marks.\n");
    scanf("%d",&a);
    if(a<30){
        printf("Your grade is C.\n");
    }else if((30<=a) && (a<70)){
        printf("Your grade is B.\n");
    }else if((70<=a) && (a<90) ){
        printf("Your grade is A.\n");
    }else if((90<=a) && (a<=100)){
        printf("Your grade is A+'\n");
    }
    return 0;
}