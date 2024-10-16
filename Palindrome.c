#include<stdio.h>
#include<string.h>
void main(){
    char a[30]="MOM";
    int len1=strlen(a);
    for(int i=0,j=len1-1;i<len1&&j>=0;i++,j--){
        if(a[i]!=a[j]){
            printf("Not a palindrome .");
            return;
        }
    }
    printf("Palindrome .");

}
