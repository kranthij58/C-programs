#include<stdio.h>
#include<string.h>
void main(){
char a[100];
int count=0;
printf("Enter the sentence : \n");
gets(a);
int t=strlen(a);
for(int i=0;i<t;i++)
{
    if(a[i]==' '&&a[i+1]!=' ')
        {
        count++;
    }
}
printf("The no of words in the given sentence is : %d", count+1);

}
