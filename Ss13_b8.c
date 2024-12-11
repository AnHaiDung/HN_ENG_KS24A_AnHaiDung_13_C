#include <stdio.h>

int UCLN(int num1, int num2){
	int max;
	if(num1<num2){
	   for(int i=num2;i>0;i--){
		   if(num1%i==0&&num2%i==0){
			    if(i>max){
				max=i;
			    }  
		    }
	    }
	}else{
		for(int i=num1;i>0;i--){
		   if(num1%i==0&&num2%i==0){
			    if(i>max){
				max=i;
			    }  
		    }
	    }
	}
	printf("UCLN cua 2 so %d va %d la %d",num1,num2,max);
}

int main(){
	int num1,num2;
	printf("nhap so nguyen thu nhat : ");
	scanf("%d",&num1);
	printf("nhap so nguyen thu hai : ");
	scanf("%d",&num2);
	UCLN(num1,num2);
	return 0;
}
