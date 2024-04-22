
#include <stdio.h>

int main() {
    
int a,b,c;

printf("enter the value of first number: ");
scanf("%d",&a);

printf("enter the value of second number: ");
scanf("%d",&b);

printf("enter the value of third number: ");
scanf("%d",&c);

if(a<b){
if(a<c){
        printf("%d is smallest ",a);
    }else{
        printf("%d is smallest ",c);
    }
}else if(b<a){
if(b<c){
        printf("%d is smallest ",b);
    }else{
        printf("%d is smallest ",c);
    }
    }
	
    }