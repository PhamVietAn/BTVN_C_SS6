#include <stdio.h>

int main(){
	int num, i, count=0;
	printf("nhap vao so nguyen bat ky: ");
	scanf("%d",&num);
	
	if(num<2){
		printf("so %d khong phai so nguyen to",num);
	}else{
		for(i=1; i<=num; i++){
			if(num%i==0){
			count++;	
			}
		}
		if(count>2){
			printf("so %d khong phai so nguyen to",num);
		}else{
			printf("so %d la so nguyen to",num);
		}
	}
	
	return 0;
}
