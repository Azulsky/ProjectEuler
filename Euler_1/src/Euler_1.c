/*
 ============================================================================
 Name       : Euler_1.c
 Author     : Tim Alexander
 Version	: 1.0
 Date		: 10/30/12
 Problem	: Add all the natural numbers below one thousand that are multiples of 3 or 5.
 ============================================================================
 */

#include <stdio.h>

int main(void) {
int agg = 0;
	for(int i = 1; i < 1000; i++){
		if( (i % 3) == 0 || (i % 5) == 0){
			printf("%d\n", i);
			agg += i;
		}
	}
	printf("The Sum of Natural Numbers Below 1k Divisible by 3 or 5 is %d\n",agg);

	return 0;
}
