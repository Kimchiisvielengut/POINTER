#include <stdio.h>

int skip();

int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 0; i < 10; i++) {
		printf("arr + %d�� ��: %d\n", i, arr[i]);
	}
	skip();
	for (int i = 0; i < 10; i++) {
		printf("arr[%d]�� ��: %d\n", i, *arr + i);
	}
	skip();
	for (int* ptr = arr; ptr < arr + 10; ptr++) {
		printf("������ [%d]�� ��: %d\n", *ptr, *arr + *ptr);
	}
	skip();

}
int skip() {
	printf("\n");
	return 0;
}
