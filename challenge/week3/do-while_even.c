#include <stdio.h>

int main()
{
	int i = 0;  // i�� 0���� ���� �� �ʱ�ȭ
	do {
		i++;  // i �� 2�� ������ �������� 1�� ������
		if (i % 2 == 0) {
			continue;
		}
		printf("Hello World %d\n", i);  // i �� Ȧ���϶� ���
	} while (i < 10);  // i �� 10���� ������ �ݺ�
	return 0;
}