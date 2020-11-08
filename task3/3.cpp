#include <stdio.h>
int main()
{	
	long long int number;
	printf("Please put a number:");
	scanf("%lld",&number);
	while(number>0){
		printf("%d",number%10);
		number=number/10;
	}
	return 0;
}