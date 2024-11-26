#include<stdio.h>

int main(){
	int numbers; 
	int sum = 0;
	printf("Moi nguoi dung nhap 5 so nguyen bat ky: \n");
	for(int i = 1; i <= 5; i++){
		printf("Nhap so thu %d ",i);
		scanf("%d", &numbers); 
	} 
	 for(int i = 1; i <= 5; i++){
	 	if(numbers % 2 !=0){
	 		sum += numbers; 
		 } 
	 }
	printf("Tong tat ca cac so le trong 5 so tren la: %d \n",sum);
	  
	return 0;
}
