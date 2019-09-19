#include<stdio.h>
#include <iostream>

int main(){
	int num, i, result=0;
	
	printf("Digite um numero: ");
	scanf("%d" , &num);
	
	for (i=2; i <= num /2; i++){
		if (num % i== 0){
			result++;
			break;
		}
	}
	if (result== 0){
		printf("%d e um numero primo\n ", num);
		else
			printf("%d nao é um número primo\n" , num);}
			return 0;
			
}
