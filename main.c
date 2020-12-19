/*!The TT Library
 *
 * @Copyright (C) 2019-2020, TTLIB
 *
 * @file       main.c
 * @ingroup    main
 * @author     tango
 * @date       2020-12-19 
 * @brief      main.c file
 */

/* //////////////////////////////////////////////////////////////////////////////////////
 * includes
 */
#include "ttlib/ttlib.h"

/* //////////////////////////////////////////////////////////////////////////////////////
 * macros
 */
#define INPUT_MAX	2048

/* //////////////////////////////////////////////////////////////////////////////////////
 * static declaration
 */
static tt_char_t input_buff[INPUT_MAX]; 


tt_int_t main(tt_int_t argc, tt_char_t** argv)
{
	// print version and exit infomation
	puts("Lispy Version 0.1.0");
	puts("Put Ctrl+c to Exit\n");

	// never ending loop
	while(1)
	{
		// output prompt
		fputs("Lispy> ", stdout);

		// read user input
		fgets(input_buff, INPUT_MAX, stdin);

		// echo back
		printf("No you're a %s", input_buff);
	}

	return 0;
}
