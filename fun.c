#include<stdio.h>
void dzire(int n);
//void vista();
int main(){
   int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    dzire(n);
}

void dzire(int n){
    for(int i=1; i<=10 ;i++){
     printf("%d \n",i*n); 
    }
   
   }
/*void vista(){
   printf("Bonjour!!");
}*/  
