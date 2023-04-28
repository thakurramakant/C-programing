//array taken as parameter in an function//
#include<stdio.h>
int dzire(int a[],int n);
int main(){
    dzire(a,100);
    return 0;
}
int dzire(int a[],int n){
    for(int i=0;i<=n;i++){
        if(a[i]%2!=0){
            printf("%d",a[i]);
        }
    }
}