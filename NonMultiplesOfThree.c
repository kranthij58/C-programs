#include<stdio.h>
void main(){
    for(int i=100;i<1000;i++){
        if(i%3==0){
            continue;
        }
        printf("%d\n",i);

    }

}
