#include <stdio.h>

int hapf(int value);  // hapf �Լ� ���� ����

int main()  // hapf �Լ� ȣ��
{
	printf("1���� 10������ ���� %d\n", hapf(10));
	printf("1���� 100������ ���� %d\n", hapf(100));
	printf("1���� 1000������ ���� %d\n", hapf(1000));

	return 0;
}

int hapf(int value)  // hapf �Լ� ����
{
	int i = 1;
	int hap = 0;

	while (i <= value) {  // i�� �Ű����� value ���� �۰ų� ������ �ݺ�
		hap = hap + i;  // ������ �����Ҷ� ���� hap �� ���� i�� ���� ����ŭ ����
		i++;  // �Ŀ� ���� i �� 1�� ����
	}
	return hap;  // �Լ��� ������ ���� hap �� ��ȯ
}