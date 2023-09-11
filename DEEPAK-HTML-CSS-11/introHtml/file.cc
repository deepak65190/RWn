#include <stdio.h> 
int main(){
    FILE *p ;
    p=fopen("demo.txt","r") ;
    char data[100] ;
    if(p==NULL){
        printf("file not exist") ;
    }else{
        fgets(data,50,p) ;
        printf("%s",data) ;
        fclose(p) ;
    }
}