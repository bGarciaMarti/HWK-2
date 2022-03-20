//     
//     
//						HomeWork2_3.c
//
//	By: Bren Garcìa Martì
//	Date: 31 Jan 2021
//
//	Problem Statement: Write a program which prompts the user to enter in two unsigned integer numbers between 15 and 
//		64 - inclusive.Write an error message to the screen if the user enters a number outside the stated input
//		rangeand prompt the user to enter another number.Read in the numbers.Calculate the sumand the
//		product.Print the sumand product to the screen.Print both numbers in the following formats - as an
//		integer, as  an  unsigned  integer, as  an  unsigned  octal  number, and as  an  unsigned  hexadecimal
//		number.
//
//				   /////// Algorithm ///////
// preprocessor header file
// main function
//		declare 2 unsigned int variables
//		declaire variables for sum and product
// 
//		prompt user for 2 values, between 15 and 64 inclusive.
//		
//		if the input is less than 15 or greater than 64
//			give error and prompt again
//		else the input is in range
//		calculate the sum and store in new variable
//		calculate the product and store in a new variable
//			square the variables and restore them in their ORIGINAL variables, to save memory
// 		print the int results to the monitor
//		print the unsigned int results to the monitor
// 		print the unsigned octal results to the monitor
// 		print the unsigned hexadecimal results to the monitor
//			
// end main function
//
////////////////////////////////////////////////
#include <stdio.h> // preprocessor header file
#pragma warning(disable: 4996) // compiler to negate scanf, which is insecure, error

int  main(void) // main function
{
	// delcare 2 double variables
	unsigned int num1 = 0;
	unsigned int num2 = 0;
	unsigned int sum = 0;
	unsigned int product = 0;

	puts("Enter two integer numbers between 15 and 64, inclusive: ");
	scanf("%u %u", &num1, &num2);
	
	if ((num1  <= 15) && (num1 >= 64)  || (num2 <= 15) && (num2 >= 64)) //do this for the other value2 (value1 || value2) <= 64)
	{
		puts("	ERROR_INVALID ENTRY	");
		puts("Try again, the entry must be between 15 and 64, inclusive: ");
	}
	else
	{
		sum = num1 + num2;
		product = num1 * num2;
	}
	
	puts("The sum and product of these inputs are: ");
	printf_s("%u %u", sum, product); //d for int, u for unsigned int
	puts(""); // formatting purposes
	puts("The input numbers as integar, unsigned integar, unsigned octal number, and unsigned hexadecimal, in that order: "); 
	printf_s("%d %u %o %x", num1, num1, num1, num1);
	printf_s("%d %u %o %x", num2, num2, num2, num2);


	return 0;
} // end main
