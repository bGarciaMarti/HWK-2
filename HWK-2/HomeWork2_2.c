//     
//						HomeWork2_2.c
//
//	By: Bren Garcìa Martì
//	Date: 31 Jan 2021
//
//	Problem Statement: Write a program that prompts the user to enter in two //double numbers, read in the double numbers. 
//Square the entered numbers and print the results to the monitor in floating-//point exponential notation 
//(scientific notation) – one using lower case ‘e’  1.25e+02  and  one using //upper case ‘E’  1.25E+02. 
//
//				   /////// Algorithm ///////
// preprocessor header file
// main function
//		declare 2 double variables
//		prompt user for 2 values, dont want 0 or negative
//		
//		if the input is not a positive number
//			give error and prompt again
//		else the input is positive so:
//			square the variables and restore them in their ORIGINAL variables, to save memory
//		print the results to the monitor one with 'e' and one with 'E'
//			
// end main function
//
////////////////////////////////////////////////
#include <stdio.h> // preprocessor header file
#pragma warning(disable: 4996) // compiler to negate scanf, which is insecure, error

int  main(void) // main function
{
	// delcare 2 double variables
	double value1 = 0.0;
	double value2 = 0.0;
	
	puts("Enter two float values greater than 0, with a space seeperating your entries: ");
	scanf("%lf %lf", &value1, &value2 );
	if (value1 <= 0.0 || value2 <= 0.0)
	{
		puts("	ERROR: INVALID ENTRY	");
		puts("Enter two float values greater than 0, with a space seeperating your entries: ");
	}
	else
	{
		value1 = value1 * value1;
		value2 = value2 * value2;
	}

	printf("%e\n", value1);
	printf("%E\n", value2);
	

		return 0;
} // end main
