#include <stdio.h>

int main() {
	char name[256];  // �������� name�� ���ڿ� ���� ����
	int age;  // �������� age�� ������ ���� ����
	double weight;  // �������� weight�� �Ǽ��� ���� ����
	float height;  // �������� height�� �Ǽ��� ���� ����
	char what[512];  // �������� what�� ���ڿ� ���� ����

	printf("�̸�:");
	scanf_s("%s", name, sizeof(name));  // ����ڰ� name ������ �̸� �Է�
	
	printf("����:");
	scanf_s("%d", &age);  // ����ڰ� age ������ ���� �Է�
	
	printf("������:");
	scanf_s("%lf", &weight);  // ����ڰ� weight ������ ������ �Է�
	
	printf("Ű:");
	scanf_s("%f", &height);  // ����ڰ� height ������ Ű �Է�

	printf("���˸�:");
	scanf_s("%s", what, sizeof(what));  // ����ڰ� what ������ ���˸� �Է�

	printf("----������ ����----\n");  // �Է��� ������ ���� �Ѵ��� ǥ��
	printf("�̸�: %s\n", name);
	printf("����: %d\n", age);
	printf("������: %lf\n", weight);
	printf("Ű: %f\n", height);
	printf("���˸�: %s", what);
	
	return 0;
}