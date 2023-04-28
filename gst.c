//concepts of array//
#include<stdio.h>
int main(){
    float price[3];
    printf("Enter price of 1 item: ");
    scanf("%f",&price[0]);

    printf("Enter price of 2 item: ");
    scanf("%f",&price[1]);

    printf("Enter price of 3 item: ");
    scanf("%f",&price[2]);

    printf("Your first price with gst is: %f",price[0]+(price[0]*18/100));

    printf("\nYour second price with gst is: %f",price[1]+(price[1]*18/100));

    printf("\nYour third price with gst is: %f",price[2]+(price[2]*18/100));
    return 0;
}
