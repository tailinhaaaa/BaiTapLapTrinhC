#include <stdio.h>
#include <math.h>

// Hàm kiểm tra số chính phương
int isPerfectSquare(int num) {
	int sqrtNum = sqrt(num);
	return (sqrtNum * sqrtNum == num);
}

// Hàm đếm số lượng số chính phương nhỏ hơn n
int countPerfectSquares(int n) {
	int count = 0;
	for (int i = 1; i < n; i++) {
		if (isPerfectSquare(i)) {
			count++;
		}
	}
	return count;
}

int main() {
	int n = 50;
	printf("Nhap so nguyen duong n: ");
	scanf("%d", &n);

	// Kiểm tra và in ra các số chính phương nhỏ hơn n
	printf("Cac so chinh phuong nho hon %d la:\n", n);
	for (int i = 1; i < n; i++) {
		if (isPerfectSquare(i)) {
			printf("%d ", i);
		}
	}
	printf("\n");

	// Đếm số lượng các số chính phương nhỏ hơn n và in ra kết quả
	int count = countPerfectSquares(n);
	printf("So luong cac so chinh phuong nho hon %d la: %d\n", n, count);
	getchar();
	return 0;
}
