//     
//						HomeWork2_4.c
//
//	By: Bren Garcìa Martì
//	Date: 31 Jan 2021
//
//	Problem Statement:  Write  a  program  which  uses looping to print the table given in the
//		Book problem – 3.24   p.107.NOTE: print the top row(labels) outside the loop.
//
//				   /////// Algorithm ///////
// preprocessor header file
// main function
//		variable N
//		variable for 10ths
//		variable for 100ths
//		variable for 1000ths

//		us puts to make title/label statement
// N= 0, pre increment
//	tenths = N*10 \tab
// hundredsths = N *100 \tab
// thousands = N * 1000 \tab
// LOOP
// Stop the Loop after 10 so
// 
// end main function
//
////////////////////////////////////////////////
#include <stdio.h> // preprocessor header file
#pragma warning(disable: 4996); // compiler to negate scanf, which is insecure, error

int  main(void) // main function
{
	int n = 0;//	variable N

	puts("N\t10*N\t100*N\t1000*N"); // puts to make title/label statement
	puts(""); //formatting purposes

	for (n = 1; n <= 10; n++) // post increment // Stop the Loop after 10
	{
		printf_s("%d", n);
		printf_s("\t%d", n * 10); //	tenths = N*10 \tab
		printf_s("\t%d", n * 100); // hundredsths = N *100 \tab
		printf_s("\t%d", n * 1000); // thousands = N * 1000 \tab
		printf_s("\n");
	} // LOOP

	return 0;
} // end main
