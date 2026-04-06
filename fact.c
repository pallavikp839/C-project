#include <stdio.h>
int factorial(int n){
	int i;
unsigned long long fact = 1;
    if(n<0) 
	    printf("factorail not defined for negetive numbers\n");
		return 0;
}
	    for (i=1; i<=n; i++){
		    fact = fact * i;
	    }
	    printf("factorial of %d = %llu", n, fact);
  return 0;
}
