#include<stdio.h>

int main(){
	int n;
	printf("Nhap vao 1 so nguyen : ");
	scanf("%d",&n);
	if(n < 0){
		printf("Vui long nhap so nguyen > 0");
		return 1;
	}
	int arr[n][n];
	int value = 1;
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			arr[i][j] = value;
			value++;
		}
	}
	printf("Ma tran vuong %d * %d la \n" , n , n);
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			printf("%d " , arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
