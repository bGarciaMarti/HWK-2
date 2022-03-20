//     
//     
//						HomeWork2_4.c
//
//	By: Bren Garcìa Martì
//	Date: 31 Jan 2021
//
//	Problem Statement:  Write  a  program  which  prompts  the  user  to  enter  in  three  integer  numbers  between  0  and  20  - 
//		inclusive.Read  in  the  numbers  using  one  scanf()  statement.After  the  numbers  are  read - in, print  a
//		message  that  states  the  value  entered and the  memory  address  it  is  stored  at, Determine  which  is
//		largestand which is smallest. Print the largestand smallest to the screen.
//
//				   /////// Algorithm ///////
// preprocessor header file
// main function
//		declare 3 int variables
// 
//		prompt user for 3 values, between 0 and 20 inclusive.
//		one scanf() to read input
//		print input
//		print memory address variables are stored at
//		calculate which variable is the max
//		calculate which variable is the min
//		print max and min to console
//
// end main function
//
////////////////////////////////////////////////
#include <stdio.h> // preprocessor header file
#pragma warning(disable: 4996) // compiler to negate scanf, which is insecure, error

int  main(void) // main function
{
	// declare 3 int variables, 2 for max and min
	int num1;
	int num2;
	int num3;
	int max;
	int min;

// prompt user for 3 values, between 0 and 20 inclusive.
	puts("A program to find the max and min of 3 input values.");
	puts("Enter 3 integers between 0 - 20, inclusive.");
	// puts("After 3 inputs, enter "g" to continue to calculation results.")

	scanf("%d %d %d", &num1, &num2, &num3); // one scanf() to read input

// print input
	printf_s("The three input values are: %d , %d, and %d\n", num1, num2, num3);
// print memory address variables are stored at
	printf_s("Address of the first number is: %p\n", &num1);
	printf_s("Address of the second number is: %p\n", &num2);
	printf_s("Address of the third number is: %p\n", &num3);

// calculate which variable is the max
	if ((num1 > num2) && (num1 > num3))
	{
		max = num1;
	}
	else if (num2 > num3)
	{
		max = num2;
	}
	else
	{
		max = num3;
	}

// calculate which variable is the min
	if ((num1 < num2) && (num1 < num3))
	{
		min = num1;
	}
	else if (num2 < num3)
	{
		min = num2;
	}
	else
	{
		min = num3;
	}

// print max and min to console
	printf_s("Maximum: %d\n", max);
	printf_s("Minimum: %d\n", min);


	return 0;
} // end main
