#include <stdio.h>
int main(){
	int n;
	for(n=1; n<=100; n++){
		if(n%3==0 && n%5!=0){
			printf("%d. fizz\n",n);
		}else if(n%3!=0 && n%5==0){
			printf("%d. buzz\n",n);
		}else if(n%3==0 && n%5==0){
			printf("%d. FizzBuzz\n",n);
		}else{
			printf("\n");
		}
	}
	
	return 0;
} 
