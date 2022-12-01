#include <stdio.h>

void nhapMang(int arr[], int &n) {
	do {
		printf("Nhap n: ");
		scanf("%d", &n);
	}while(n < 1);
	
	//nhap mang n -> idnex cuoi cung n - 1
	for(int i = 0; i < n; i++) {
		do {
			printf("arr[%d] = ", i);
			scanf("%d", &arr[i]);
		}while(arr[i] % 2 != 0);
	}
}

void timVitri(int arr[], int n, int b) {
	int mark = 0;	//danh dau
	
	for(int i = 0; i < n; i++) {
		if(arr[i] == b) {
			printf("%d ", i);
			mark++;
		}
	}
	
	if(mark == 0) {
		printf("Khong tim thay %d trong mang", b);
	}
}

void xuatMang(int arr[], int n) {
	for(int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}

//ham hoan vi
void swap(int &a, int &b) {
	int temp = b;
	b = a;
	a = temp;
}

//sap xep tang
//vi tri cuoi cung cua mang n - 1

void sapXepTang(int arr[], int n) {
	for(int i = 0; i < n - 1; i++) {
		for(int j = 0; j < n - i - 1; j++) {
			//thang phia truoc lon hon thang phia sau ==> swap
			if(arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
		}
	} 
}

void daoNguocMang(int arr[], int n) {
	int i = 0;
	int j = n - 1;
	while(i < j) {
		swap(arr[i], arr[j]);
		++i;
		--j;
	}
}

int main() {
	//nhap vao mang so nguyen voi so luong phan tu n
	//nhap so luong phan tu n
	
	int n = 5;
	int arr[n];
	nhapMang(arr, n);
	xuatMang(arr, n);

	//input nhap vap b
	int b;
	printf("Nhap b: ");
	scanf("%d", &b);

	//tim vi tri
	printf("Vi tri cua b trong mang: ");
	timVitri(arr, n, b);
		
	daoNguocMang(arr, n);

	sapXepTang(arr, n);
	
	xuatMang(arr);
	
	return 0;
}
