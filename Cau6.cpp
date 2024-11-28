#include<stdio.h>

int main(){
	int n;
	int sum = 0;
	printf("Nhap vao kich thuoc ma tran vuong : ");
	scanf("%d",&n);
	if(n < 0){
		printf("Vui long nhap kich thuoc > 0");
		return 1;
	}
	int arr[n][n];
	for(int i = 0 ; i < n ; i ++){
		for(int j = 0 ; j < n ; j++){
			printf("Nhap vao phan tu [%d][%d] : ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i = 0 ; i < n ; i++){
		sum += arr[i][i];
	}
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			printf("%d \t",arr[i][j]);
		}
		printf("\n");
	}
	printf("Tong cac phan tu tren duong cheo chinh la : %d",sum);
	return 0;
}
