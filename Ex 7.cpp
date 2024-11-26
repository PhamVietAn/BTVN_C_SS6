#include <stdio.h>

int main(){
	int a, b;
	printf("nhap so nguyen bat ky: ");
	scanf("%d",&a);
	printf("boi chung cua %d la: ",a);
	for(b=1; b<=a; b++){
		if(a%b==0){
			printf("%d ",b);
		}  
	}
	 
	return 0; 
} 
