#include<stdio.h>
void main(){

   int a[20][20],len;
   printf("Enter the no of names : ");
   scanf("%d",&len);
   printf("Enter the names :");
   for(int i=0;i<len;i++){
    scanf("%s",a[i]);
   }
   printf("The names are : \n");
   for(int i=0;i<len;i++){
    printf("%s  ",a[i]);
   }

}
