#include<stdio.h>

int main(){
	
	int angka_bulat = 17;
	float angka_koma= 1.7f; 
	char karakter = 'a';
	char string[100] = "Hello";
	
	scanf("%d, &angka_bulat");
	getchar();
	printf("%d\n", angka_bulat);
	
	scanf("%f", &angka_koma);
	getchar();
	printf("%.2f\n", angka_koma);
	
	scanf("%c", &karakter);
	getchar();
	printf("%c\n", karakter);
	
	scanf("%[^\n]", string);
	getchar();
	printf("%s\n", string);
	
	
	return 0;
}
