#include<stdio.h>

int main(){
	int cols , rows;
	printf("Nhap vao so hang cua ma tran : ");
	scanf("%d",&rows);
	printf("Nhap vao so cot cua ma tran : ");
	scanf("%d",&cols);
	int arr[rows][cols];
	if(rows < 0 || cols < 0){
		printf("Vui long nhap lai so hang va cot > 0");
		return 1;
	}
	for(int i = 0 ; i < rows ; i++){
		for(int j = 0 ; j < cols ; j++){
			printf("Nhap gia tri thu [%d][%d] cua ma tran : ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	int max = arr[0][0];
	for(int i = 0 ; i < rows ; i++){
		for(int j = 0 ; j < cols ; j++){
			if(max < arr[i][j]){
				max = arr[i][j];
			}
		}
	}
	for(int i = 0 ; i < rows ; i++){
		for(int j = 0 ; j < cols ; j++){
			printf("%d \t",arr[i][j]);
		}
		printf("\n");
	}
	printf("Phan tu lon nhat trong mang la : %d ", max);
	return 0;
}