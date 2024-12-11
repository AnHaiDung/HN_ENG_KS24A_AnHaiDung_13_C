#include <stdio.h>
//
void addItem(int arr[100][100], int n, int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("arr[%d][%d] : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
}
//
void showItem(int n,int m,int arr[100][100]){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
    } 
}
//
void showCorner(int n,int m,int arr[100][100]){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arr[i][j]==arr[0][0]||arr[i][j]==arr[0][m-1]||arr[i][j]==arr[n-1][m-1]||arr[i][j]==arr[n-1][0]){
				printf("%d",arr[i][j]);
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	
}
//
void showDiagonal(int n,int m,int arr[100][100]){
		printf("cac gia tri trong duong cheo chinh la : \n");
		for(int i=0;i<m;i++){	
		    printf("%d\n",arr[i][i]);
	    } 
		printf("\n");
		printf("cac gia tri trong duong cheo phu la : \n");
	    for(int i=0;i<m;i++){
			printf("%d\n",arr[i][m-i-1]);
		}
		printf("\n");
}
//
void showBorder(int n,int m,int arr[100][100]){
	for(int i=0;i<m;i++){
	    printf(" %d ",arr[0][i]);
	}
	printf("\n");
	for(int i=1;i<n-1;i++){
		printf(" %d ",arr[i][0]);
		for(int a=1;a>0&&a<m-1;a++){
	    	printf("   ");
		}
    		printf(" %d ",arr[i][m-1]);
	}
			printf("\n");
	for(int i=0;i<m;i++){
		printf(" %d ",arr[n-1][i]);
	}
		printf("\n");
}
//
int check(int number){
	if (number < 2) {
		return 0; 
	}
    for (int i = 2;i*i<=number;i++){ 
        if (number%i==0){
        	return 0;
		}
    }
    return 1;
}
void showPrime(int arr[100][100]){
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			if(check(arr[i][j])){
				printf("%d ",arr[i][j]);
				if(arr[i][j]==3){
			        printf("\n");
		        }
			}
		}
	}
	printf("\n");
}
int main(){
	int n,m,choose;
	int arr[100][100];
	printf("nhap so hang : ");
	scanf("%d",&n);
	printf("nhap so cot : ");
	scanf("%d",&m);
	do{
		printf("Menu\n");
		printf("1.Nhap gia tri cac phan tu cua mang\n");
		printf("2.In gia tri cac phan tu cua mang theo ma tran\n");
		printf("3.In ra cac phan tu o goc theo ma tran\n");
		printf("4.In ra cac phan tu nam tran duong bien theo ma tran\n");
		printf("5.In ra cac phan tu nam tran duong cheo chinh va cheo phu theo ma tran\n");
		printf("6.In ra cac phan tu la so nguyen to theo ma tran\n");
		printf("7.Thoat\n");
		scanf("%d",&choose);
		switch(choose){
			case 1:
				addItem(arr,n,m);
				break;
			case 2:
				showItem(n,m,arr);
				break;
			case 3:
				showCorner(n,m,arr);
				break;
			case 4:
				showBorder(n,m,arr);
				break;
			case 5:
				if(n!=m){
					printf("mang khong phai hinh vuong");
				}else{
				    showDiagonal(n,m,arr);
				}
				break;
			case 6:
				showPrime(arr);
				break;
			case 7:
				printf("ket thuc chuong trinh");
				break;
			default :
				printf("khong thuoc menu");
				
		}
	}while(choose!=7);
	return 0;
}
