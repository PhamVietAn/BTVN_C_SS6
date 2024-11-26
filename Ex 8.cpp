#include <stdio.h>;
#include <math.h>

int main(){
	int term;
	float interestRate, interest, oldMoney, total;
	
	printf("tien ban dau: ");
	scanf("%f",&oldMoney);
	printf("lai xuat(%%): ");
	scanf("%f",&interestRate);
	printf("so thang gui: ");
	scanf("%d",&term);
	
	interestRate /=100;
	total = oldMoney*pow(1+interestRate, term);
	
	printf("---------------------------------\n");
	printf("tien lai: %.3f\n",interest = total - oldMoney);
	printf("tien nhan lai duocj: %.3f",total);
	
	return 0;
}
