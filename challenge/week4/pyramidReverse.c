#include <stdio.h>

int main() {
	int floor;  // ������ ���� floor ����
	printf("�� ���� �װڽ��ϱ�? (5~100) \n");
	scanf_s("%d", &floor);  // ����ڷκ��� floor ������ �� �Է¹ޱ�

	for (int i = floor; i > 0; i--) {
		for (int j = 0; j < floor - i; j++) {
			printf("S");
		}  //  j ���� floor - i �϶� S ��� �ݺ�
		for (int k = 0; k < i * 2 - 1; k++) {
			printf("*");
		}  //  k ���� i * 2 -1 �϶� *��� �ݺ�
		printf("\n");
	}  //  i ���� ����� �� �ݺ�
}