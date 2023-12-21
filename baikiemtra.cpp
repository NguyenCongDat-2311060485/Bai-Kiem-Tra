//Nguyen Cong Dat 2311060485

#include <stdio.h>
#include <string.h>
#include <math.h>

struct DIENTHOAI{
	char tenDienThoai[30];
	int namSanXuat;
};

void InThongTin(DIENTHOAI dt[20]){
	printf("Cac dien thoai san xuat trong vong 2 nam tro lai day la: ");
	for(int i = 0; i < 3; i++){
		if(dt[i].namSanXuat + 2 == 2023 or dt[i].namSanXuat + 1 == 2023 or dt[i].namSanXuat == 2023){
			printf("\n%s", dt[i].tenDienThoai);
		}
	}
}

main(){
	DIENTHOAI dt[20];
	for(int i = 0; i < 3; i++){
		printf("Nhap thong tin dien thoai %d\n", i + 1);
		printf("Nhap ten: \n"); gets(dt[i].tenDienThoai);
		printf("Nhap nam san xuat: \n");scanf("%d", &dt[i].namSanXuat);
		_flushall();
	}
	InThongTin(dt);
}
