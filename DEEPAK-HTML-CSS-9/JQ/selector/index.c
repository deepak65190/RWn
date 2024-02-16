#include <stdio.h>

//chain of pointer 
int main(){ 
int a =10 ;
int *p =&a ;
int **p2 ;
p2=&p ;
printf("%u =>%d",p2,**p2) ; 

    return 0 ;
}