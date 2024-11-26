#include<stdio.h>

int main(){
	int number;
	int sochan, sole; 
	printf("Nhap 5 so nguyen: \n");
	for(int i = 1; i <= 5; i++){
		printf("Nhap so thu %d: \n",i);
		scanf("%d", &number); 
		if(number % 2 !=0){
			sole += 1;
		} else if(number % 2 == 0){
			sochan += 1;
		}else{
			printf("Day khong phai la so chan or so le \n");
		}
	} 
	printf("So luong so chan la: %d \n",sochan);
	printf("So luong so le la: %d \n",sole); 
	 
	return 0; 
} 
