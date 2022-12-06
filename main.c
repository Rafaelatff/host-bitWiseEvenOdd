/*
 * main.c
 *
 *  Created on: 5 Dec 2022
 *      Author: rafaela
 */
#include <stdio.h>
#include <stdint.h>

int main (void){
	int32_t num1;
	printf("Enter a number:");
	fflush(stdout);
	scanf("%d",&num1);

	if(num1 & 1){ //do bit masking with LSB 1
		printf("%d is odd number\n",num1);
	}else{
		printf("%d is even number\n",num1);
	}
}
