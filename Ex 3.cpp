#include <stdio.h>

int main(){
	int password = 1234567890, usedPass;
	
	do{
		printf("nhap mat khau (10 so): ");
		scanf("%d",&usedPass);
		
		if(password != usedPass){
			printf("mat khau khong dung\n");
		}
	}while(password != usedPass);
	
	printf("mat khau chinh xac");
	
	return 0;
}
