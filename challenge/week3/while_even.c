#include <stdio.h>

int main()
{
	int i = -1;  // i �� -1 �� ���� �� �ʱ�ȭ
	while (i < 10) {
		i++;  // i�� 2�� ������ �������� 1�� ������
		if (i % 2 == 0) {
			continue;
		}  // i�� 10���� ������ �ݺ�
		printf("%d Hello World! \n", i);  // i�� Ȧ���϶� ���
	}
	return 0;
}