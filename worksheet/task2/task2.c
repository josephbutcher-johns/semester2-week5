/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Joseph Butcher-Johns
 * ID: 
 */

#include <stdio.h>
#include <string.h>

int main(void){
	char hex[9];
	int i, value;
	long int decimal = 0;
	
	printf("Enter a hexadecimal:");
	scanf("%s", hex);

	for (i = 0; hex[i] != '\0'; i++) {
		char c = hex[i];

		if (c >= '0' && c <= '9') {
			value = c - '0';
		} else if (c >= 'A' && c <= 'F') {
			value = c - 'A' + 10;
		} else if (c >= 'a' && c <= 'f') {
			value = c - 'a' + 10;
		} else {
			printf("Error: Invalid Hexadecimal\n");
			return 0; 
		}
		decimal = decimal * 16 + value;
	}

	
	// if input contains invalid hex digit
	// printf("Error: Invalid Hexadecimal\n");
	// print the decimal result
	printf("decimal:%ld\n", decimal);
	
	return 0;
}