#include <stdio.h>

int main() {
	int a = 10;

	int* ptr;
	ptr = &a; // a�� �ּڰ��� ���� = a�� ����Ŵ

	int** ptr_ptr; // �����͸� ����Ű�� ������
	ptr_ptr = &ptr; // ptr�� �ּڰ��� ����

	printf("a = %d\n", a);
	printf("&a = %d\n", &a);

	printf("ptr = %d\n", ptr);
	printf("&ptr = %d\n", &ptr);

	printf("ptr_ptr = %d\n", **ptr_ptr);

}