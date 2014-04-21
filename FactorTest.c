// Testing factor function
// The main input possibilities -for which the factest function tests the factor function- are: 
// wrong input as zero or a negative integer; 1; an average postive integer; 
// a number containing a square number as a factor; prime number

#include "primefactors.h"


int factest(){
	int divnum;

	factor(-5);
	printf("The factor function should not let a negative integer processed as an input.\nIn case of running without a mistake you should see:\n \"Dealing only with positive integers\"\n\n");
	
	factor(0);
	printf("The factor function should not let zero processed as an input.\nIn case of running without a mistake you should see:\n \"Dealing only with positive integers\"\n\n");
	
	factor(1);
	printf("In case of running correctly, you should see [ 1 ]\n\n");

	divnum=factor(15);
	assert(divnum==2);
	printf("In case of running correctly, you should see [ 3 5 ]\n\n");

	divnum=factor(64);
	assert(divnum==6);
	printf("In case of running correctly, you should see [ 2 2 2 2 2 2 ]\n\n");

	divnum=factor(41);
	assert(divnum==1);
	printf("In case of running correctly, you should see [ 41 ]\n\n");

	return 0;
}