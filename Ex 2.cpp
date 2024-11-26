#include <stdio.h>

int main(){
	int num1, num2, num3, num4, num5, evenNum = 0, oddNum = 0;
	printf("nhap vao 5 so nguyen: \n");
	scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
	if(num1%2!=0){
		oddNum += num1;
	}else{
		evenNum += num1;
	}
	if(num2%2!=0){
		oddNum += num2;
	}else{
		evenNum += num2;
	}
	if(num3%2!=0){
		oddNum += num3;
	}else{
		evenNum += num3;
	}
	if(num4%2!=0){
		oddNum += num4;
	}else{
		evenNum += num4;
	}
	if(num5%2!=0){
		oddNum += num5;
	}else{
		evenNum += num5;
	}
	printf("tong cac so le la: %d\n",oddNum);
	printf("tong cac so chan la: %d",evenNum);
	
	return 0; 
} 
