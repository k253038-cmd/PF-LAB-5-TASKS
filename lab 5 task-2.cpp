
#include <stdio.h>

int main(){
	int age;
	printf("Enter your age");
	scanf("%d" , &age);
	if(age<=10){
	printf("chlid");
	}else if(age>10 && age<=19){
		printf("teenager");
	}else if(age>19 && age<=40){
		printf("adult");
	}else{
		printf("senior");
	}
	return 0;
	
}


