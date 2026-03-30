#include <stdio.h>
void factorial(){
	int n, i;
unsigned long long fact = 1;
printf("enter an interger: ");
scanf("%d", &n);

    if(n<0) 
	    printf("enter factorail of a negetive number doesnt exist,");
    else{
	    for (i=1; i<=n; ++i){
		    fact *= i;
	    }
	    printf("factorial of %d = %llu", n, fact);
    }
   // return 0;
}
