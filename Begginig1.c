include <stdio.h>
 
 int main(){
 	
 	char a;
	
	float b,c,d;
	
	printf("Welcome to Calculator...");
	printf("\n \n \nFirst Number : ");
	scanf("%f",&b);
	printf("\n \nChoose the  operation : ");
	scanf("%s",&a);
	printf("\n \nSecond Number : ");
	scanf("%f",&c);
	
	
	if(a=='+'){
		d=b+c;
		printf("Result of the opreation : %f",d);
	}
 	
 	else if(a=='-'){
 		d=b-c;
 		printf("Result of the operation : %f",d); 		
	 }
 	
 	else if(a=='/'){
 		d=b/c;
 		printf("Result of the operation : %f",d);
	 }
 	
 	else if(a=='*'){
 		d=b*c;
 		printf("Result of the opration : %f",d);
	 }
	 else{
	 	printf("You made a wrong choice...");
	 
	 }
	return 0;
 }
