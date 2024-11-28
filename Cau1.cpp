#include<stdio.h>

int main(){
	int n;
	int arr[n];
	printf("Nhap do dai mang : ");
	scanf("%d",&n);
	for(int i = 0 ; i < n ; i++){
		printf("Nhap phan tu thu %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	for(int i = 0; i < n ; i++){
		printf("%d\t",arr[i]);
	}
	return 0;
}
