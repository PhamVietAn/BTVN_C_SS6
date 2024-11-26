#include <stdio.h>
#include <math.h>

int main(){
	int n, count=0, number=0, prime=2;
	printf("nhap so luong so nguyen to can in ra: ");
	scanf("%d",&n);
	printf("so nguyen to: ");
	
	while(number<n){
		count=0;
		for(int i=1; i<=sqrt(prime); i++){
			if(prime%i==0){
				count++;
			}
		}
		if(count==1){
			printf("%d ",prime);
			number++;
		}
		prime++;
	}
}
