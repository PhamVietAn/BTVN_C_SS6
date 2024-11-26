#include <stdio.h>
#include <math.h>

int main(){
	int num, digit_1, digit_2, digit_3, sum;
	
	printf("so armstrong co 3 chu so la: ");
	for(num=100; num<1000; num++){
		digit_1 = num/100;
		digit_2 = (num/10)%10;
		digit_3 = num%10;
		
		sum = pow(digit_1,3) + pow(digit_2,3) + pow(digit_3,3);
		
		if(num==sum){
			printf("%d ",num);
		}
	}
	
	return 0; 
} 
