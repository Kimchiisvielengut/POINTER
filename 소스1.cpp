#include <stdio.h>

int main() {
	int a = 10;

	int* ptr;
	ptr = &a; // a의 주솟값을 가짐 = a를 가리킴

	int** ptr_ptr; // 포인터를 가리키는 포인터
	ptr_ptr = &ptr; // ptr의 주솟값을 가짐

	printf("a = %d\n", a);
	printf("&a = %d\n", &a);

	printf("ptr = %d\n", ptr);
	printf("&ptr = %d\n", &ptr);

	printf("ptr_ptr = %d\n", **ptr_ptr);

}