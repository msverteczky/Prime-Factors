#include "primefactors.h"

int factor(int num){
	int fact;		//prime factors of input "num", it's value is not constant	
	int divnum=0;		//number of elements in factorization of "num"
	
	
	printf("%d --> ",num);
	if(num < 0 || num==0) printf("Dealing only with positive integers\n\n");
	else{
		printf("[ ");
		if(num==1) printf("1 ");
		while(num!=1){		
			for(fact=2; fact<=sqrt(num) && num % fact != 0; ++fact);
			if(fact > sqrt(num))
				fact = num;
			printf("%d ", fact);
			num /= fact;
			divnum++;
		}
		printf("]\n");
	}
	return divnum;
}
