#include<stdio.h>
#include<string.h>
void main(){

 char pass[30];
 printf("Enter the password : ");
 gets(pass);
 int length =strlen(pass);
 int upper,lower,special,digit;
 if(length>8){

    for(int i=0;i<length;i++){
            if(isupper(pass[i])){
                upper++;
            }else if(islower(pass[i])){
                lower++;
            }else if(isdigit(pass[i])){
                digit++;
            }else{
                special++;
            }

    }
    if(upper>0 && lower>0 && special>0 && digit>0){
        printf("Strong password\n");
    }else{
        printf("Weak Password");
    }
 }else{
    printf("Enter password with more than 8 digits ");
 }
}
