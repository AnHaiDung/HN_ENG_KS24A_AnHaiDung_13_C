#include <stdio.h>
//
 void addItem(int arr[],int num){

	for(int i=0;i<num;i++){
		printf("arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
}
//
   void showItem(int arr[],int size){
	for(int i=0;i<size;i++){
		printf(" %d \n",arr[i]);
	}
}
//
   void addIndex(int index, int num2, int arr[],int num){
   	for(int i=num;i>index;i--){
   		arr[i]=arr[i-1];
    }
    arr[index]=num2;
}
//
   void fixItem(int fix,int num3, int arr[],int num){
   	arr[fix]=num3;
}
//
   void deleteItem(int de,int arr[],int num){
   for(int i=de;i<num;i++){
   	    arr[i]=arr[i+1];
    }	
}
//
  void arrangeItem(int arr[],int num){
  int choose6=0;
  printf("1. Giam dan\n");
  printf("2. Tang dan\n");
  scanf("%d",&choose6);
  if(choose6==1){
  	for(int i=0;i<num;i++){
    	for(int j=0;j<num-i-1;j++){
			if(arr[j]<arr[j+1]){
				int temp =arr[j];
				arr[j]=arr[j+1];
    			arr[j+1]=temp;
			}
		}
	}
  }else{
  	for(int i=0;i<num;i++){
    	for(int j=0;j<num-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp =arr[j];
				arr[j]=arr[j+1];
    			arr[j+1]=temp;
			}
		}
	}
  }
}
//
  void findItem(int arr[],int num,int item){
  	int choose7=0;
  	printf("1. Tim kiem tuyen tinh\n");
  	printf("2. Tim kiem nhi phan\n");
  	scanf("%d",&choose7);
  	if(choose7==1){
  		int flag=-1;
  		for(int i=0;i<num;i++){
  			if(arr[i]==item){
  				printf("phan tu %d co vi tri %d\n",item,i);
  				flag=i;
			  }
		}
		if(flag==-1){
			printf("khong tim thay phan tu trong mang\n");
		}
	}else{
		int start=0;
		int length=num;
		int end=num-1;
		int mid;
		int find=0;
		while(start<=end){
			mid=(start+end)/2;
			if(arr[mid]==item){
			    printf("phan tu %d o vi tri %d\n",item,mid);
			    find=1;
			    break;
		    }else if(arr[mid]>item){
		    	end=mid-1;
			}else{
				start=mid+1;
		    }
		}
		if(find==0){
			printf("khong tim thay phan tu trong mang\n");
		}
	}
  }
int main(){
	int choose,index,fix,de,item;
	int arr[100];
	int num,num2,num3;

	do{
		printf("Menu\n");
		printf("1.Nhap so phan tu can nhap va gia tri cac phan tu\n");
		printf("2.In ra gia tri cac phan tu dang quan ly\n");
		printf("3.Them mot phan tu vao vi tri chi dinh\n");
		printf("4.Sua mot phan tu o vi tri chi dinh\n");
		printf("5.Xoa mot phan tu o vi tri chi dinh\n");
		printf("6.Sap xep cac phan tu\n");
		printf("7.Tim kiem phan tu nhap vao\n");
		printf("8.thoat\n");
		scanf("%d",&choose);
		switch(choose){
			case 1:
				printf("nhap so phan tu muon co : ");
				scanf("%d",&num);
				addItem(arr,num);
				break;
			case 2:
				showItem(arr, num);
				break;
			case 3:
				printf("nhap index : ");
				scanf("%d",&index);
				printf("nhap gia tri ban muon them : ");
				scanf("%d",&num2);
				addIndex(index,num2,arr,num);
				break;
			case 4:
				printf("nhap vi tri muon sua trong mang : ");
				scanf("%d",&fix);
				printf("nhap phan tu muon thay : ");
				scanf("%d",&num3);
				fixItem(fix,num3,arr,num);
				break;
			case 5:
				printf("nhap vi tri ban muon xoa : ");
				scanf("%d",&de);
				deleteItem(de,arr,num);
				break;
			case 6:
				arrangeItem(arr,num);
				break;
			case 7:
				printf("nhap phan tu muon tim trong mang : ");
				scanf("%d",&item);
				findItem(arr,num,item);
				break;
			case 8:
				printf("ket thuc chuong trinh");
				break;
			default :
				printf("khong thuoc menu");
		}
		
	}while(choose!=8);
	
	return 0;
}
