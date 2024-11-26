#include<stdio.h>

int main(){
	int password = 24;
	int input;
	do{
		printf("Moi nguoi dung nhap mat khau: ");
		scanf("%d", &input);
		if(input == password){
			printf("Ban da nhap dung mat khau \n");
			break;
		}else{
			printf("Rat tiec mat khau da sai \n");
		}
	}while(input != password);
	
	return 0;
}
