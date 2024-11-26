#include<stdio.h>
#include<math.h>

int main(){
	float a, b, c;
	float delta, x1, x2;
	printf("Moi nguoi dung giai phuong trinh bac 2: ax^2 - bx + c = 0\n");
	printf("Moi nhap he so a: ");
	scanf("%f", &a);
	printf("Moi nhap he so b: ");
	scanf("%f", &b);
	printf("Moi nhap he so c: ");
	scanf("%f", &c);
	if(a == 0){
		if(b == 0){
			if(c == 0){
				printf("Phuong trinh tren co vo so nghiem \n");
			}else{
				printf("Phuong trinh tren vo nghiem \n");
			}
		}else{
			x1 = -c / b;
			printf("Day la phuong trinh bac nhat co nghiem la: x = %.2f\n", x1);
			
		}
				
		}else{
			delta = b * b - 4 * a * c;
			if(delta < 0){
				printf("Phuong trinh tren vo nghiem \n");
		}else if (delta == 0){
			x1 = -b / (2 * a);
			printf("Phuong trinh tren co nghiem kep la: x = %.2f \n", x2);
		}else{
			x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co 2 nghiem phan biet: \n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
		}
	}
	return 0;
}
