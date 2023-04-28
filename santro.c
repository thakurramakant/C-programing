#include<stdio.h>
#include<math.h>
void square ();
void circle ();
void rectangle();
int main(){
    square ();
    circle ();
    rectangle ();
    return 0;
}

void square(){
    int p;
    printf("Enter the value to power a number: ");
    scanf("%d",&p);
    int sq = pow(p,2);
    printf("Square of required value is: %d",sq);
}

void circle(){
    /*float r;
    printf("\n Enter the value radius of circle: ");
    scanf("%f",&r);
    float cir = 3.14*pow(r,2);
    printf("Area of the circle: %f",cir);*/

    float r;
    printf("\n Enter the value of r: ");
    scanf("%f", &r);
    float cir = 3.14 * pow(r, 2);
    printf("%f", cir);
}

void rectangle(){
    int l,b;
    printf("\n Enter the value of length: ");
    scanf("%d",&l);
    printf("\n Enter the value of breadth: ");
    scanf("%d",&b);
    int rec = l*b;
    printf("Area of the rectangle is: %d",rec);
}