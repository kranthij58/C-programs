#include<stdio.h>
void main(){

    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    if(a%2 == 0)
    {
     for(int i=1;i<=10;i++){
            printf("%d * %d = %d" , i,a,i*a);
            printf("\n");
        }
    }
    else
    {
        for(int i = 1 ;i <= 15 ; i++){
            printf("%d * %d = %d" , i,a,i*a);
            printf("\n");
        }
    }

}
