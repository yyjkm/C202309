#include <stdio.h>

int main() {
	int num;  // ������ ���� num ����
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%d", &num);  // scanf �Լ��� num�� ���� �Է�
	if (num == 0) {
		printf("zero");
	}  // num ���� 0�� ��� ���
	else if (num == 1) {
		printf("one");
	}  // num ���� 1�� ��� ���
	else if (num == 2) {
		printf("two");
	}  // num ���� 2�� ��� ���
	else {
		printf("not 0 ~ 2");
	}  // num ���� 0~2 �̿��� ���� ��� ���
	return 0;
}