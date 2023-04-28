#include<stdio.h>
#include<math.h>
void dzire(int p);
int main(){
    int p;
    printf("Enter a number: ");
    scanf("%d",&p);
    dzire (p);
    return 0;
}
void dzire(int p){
   int sq = pow(p,2); 
   printf("%d",sq);
}