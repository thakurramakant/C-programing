#include<stdio.h>
int main(){
int a;
printf("Enter your marks obtained: \n");
scanf("%d",&a);
if(a<=30){
    printf("You have Failed.\n");
}else{
    printf("You have passed.\n");
}
return 0;
}