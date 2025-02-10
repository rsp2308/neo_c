#include<stdio.h>
int main(){
    int i=0;
    for(;;){
        if(i<10){
            printf("Hello World\n");
        }
        else{
            break;
            i++;
        }
    }
}