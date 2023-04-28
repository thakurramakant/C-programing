#include<stdio.h>
int main(){
    int car = 1837;
    int *ptr = &car;
    
    printf("%u\n",ptr);
    ptr++;
    printf("%u\n",ptr); 
    ptr--;
    printf("%u\n",ptr); 

    float cars = 1837;
    float *ctr = &cars;

    printf("%u\n",ctr);
    ctr++;
    printf("%u\n",ctr); 
    ctr--;
    printf("%u\n",ctr); 

    char dzire = 'd';
    char *atr = &dzire; 

    printf("%u\n",atr);
    atr++;
    printf("%u\n",atr); 
    atr--;
    printf("%u\n",atr);     

    return 0;
}