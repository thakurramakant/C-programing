#include<stdio.h>
void main()
{
    int a,n,c,i;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Prime numbers from 1 to %d are\n",n);
    for(a=2;a<=n;a++){
        c=0;
        for(i=2;i<a-1;i++)
    {
        if(a%i==0){
            c++;
            break;
        }
        else{
            continue;
        }
    }
    if(c==0){
        printf("%d\n",a);
    }
    }
}