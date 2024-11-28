#include<stdio.h>

int main(){
	int input;
	int found = 0;
	int arr[5] = {1 , 2 , 3 , 4 , 5};
	printf("Nhap 1 so bat ky : ");
	scanf("%d",&input);
	for(int i = 0 ; i < 5 ; i++){
		if(arr[i] == input){
			printf("Vi tri %d trong mang la : %d",input,i);
			found = 1;
			break;
		}
	}
	if(!found){
		printf("Phan tu khong ton tai trong mang");
	}
	return 0;
}
