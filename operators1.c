#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int tc,c,tip,tax;
    float tax1,tip1,tip2;
    scanf("%f",&c);
    scanf("%d %d",&tip,&tax);
    printf("tip=%d",tip);
    
    tip2=tip/100;
    
    printf("tip2=%f",tip2);
    
   // tip1=c*((float)tip/100);
    tax1=c*((float)tax/100);
    
    printf("tip=%f\ntax=%f",tip1,tax1);
    
    tc=tip1+tax1+c;
    
    printf("\ntotal cost %d",tc);
    
}
