#include<stdio.h>
void main()
{
 int a,b,n;
 printf("Enter n:");
 scanf("%d",&n);
 printf("Fibonacci numbers are \n");
 a=0;
 b=1;
 printf("%d\n%d\n",a,b);
 for(int i=0;i<n-2;i++){
    int f;
    f=a+b;
    a=b;
    b=f;
    if(f>n){
        break;
    }
    printf("%d\n",f);
 }
}