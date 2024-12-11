#include <stdio.h>

void mang2Chieu(int arr[100][100], int cot, int hang){
	for(int i=0;i<hang;i++){
		for(int j=0;j<cot;j++){
			printf("arr[%d][%d] : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
}

int main(){
	int cot,hang;
	int arr[100][100];
	printf("nhap so hang : ");
	scanf("%d",&hang);
	printf("nhap so cot : ");
	scanf("%d",&cot);
	mang2Chieu(arr,cot,hang);
	for(int i=0;i<hang;i++){
		for(int j=0;j<cot;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
    } 
	return 0;
}
