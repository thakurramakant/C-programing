#include<stdio.h>
#include<math.h>
int main(){
    float p,r,si,t,ci;
    printf("Enter your Principle value: ");
    scanf("%f",&p);

    printf("Enter your Rate of intrest: ");
    scanf("%f",&r);
    
    printf("Enter Time in year: ");
    scanf("%f",&t);

    si = p*t*r/100;
     printf("Your Simple intrest is: %f \n ",si);

    ci = p*(pow(1+r/100,t));

    //ci = a-p;//
    printf("Your compound intrest is: %f ",ci);

    return 0;
}