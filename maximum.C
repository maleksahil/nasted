#include<stdio.h>

main(){
	
	int a,b,c,d;
	
	printf("enter the first number: ");
	scanf("%d",&a);
	
	printf("enter the second number: ");
	scanf("%d",&b);
	
	printf("enter the third number: ");
	scanf("%d",&c);
	
	printf("enter the forth number: ");
	scanf("%d",&d);
	
	if(a>b){
		if(a>c){
			if(a>d){
				printf("%d is biggest number",a);
			}else{
				printf("%d is biggest number",d);
			}
		}else{
			printf("%d is biggest number",c);
		}
		
	}else{
		if(b>c){
			if(b>d){
				printf("%d is biggest number",b);
			}else{
				printf("%d is biggest number",d);
			}
		}else{
			printf("%d is biggest number",c);
		}
	}
}