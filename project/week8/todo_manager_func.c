#include <stdio.h>
#define MAX_TASKS 10
#define CHAR_NUM 100
#include <string.h>

char tasks[MAX_TASKS][CHAR_NUM] = { "" };  // �� �� ����� �����ϱ� ���� 10 x 100 ũ���� 2���� �迭
int taskCount = 0; // �� ���� ���� ��Ÿ���� ���� ����

void addTask(char task[]) {
	printf("�� ���� �Է��ϼ��� (���� ���� �Է��ϼ���): ");
	scanf_s("%s", task, (int)sizeof(task));  // ����ڷκ��� �� ���� �Է¹ޱ�
	strcpy_s(tasks[taskCount], sizeof(tasks[taskCount]), task);
	printf("�� �� ""%s""�� ����Ǿ����ϴ�\n\n", task);
}  // �� ���� �߰��ϴ� �Լ� ����

void delTask(int delIndex, int taskCount) {

	printf("%d. %s : �� ���� �����մϴ�.\n", delIndex, tasks[delIndex - 1]);
	for (int i = delIndex; i < taskCount + 1; i++) {
		strcpy_s(tasks[i - 1], sizeof(tasks[i]), tasks[i]);  // ���� �� �ڿ� �ִ� �� �� ������ �ű��
	}
}  // �� ���� �����ϴ� �Լ�

void printTask(int taskCount) {
	for (int i = 0; i < taskCount; i++) {
		printf("%d. %s \n", i + 1, tasks[i]);
	}  // �ε��� 0�� ���� taskCount ���� �� �� ���
	printf("\n");
}  // �� �� ����� �����ִ� �Լ�

int main() {
	printf("TODO ����Ʈ ����! \n");

	while (1) {
		int choice = -1; // ����� �Է� �޴��� �����ϱ� ���� ����

		// ����ڷκ��� �޴� �Է¹ޱ� + �� ���� �� ����ϱ�
		printf("------------------\n");
		printf("�޴��� �Է����ּ���.\n");;
		printf("1. �� �� �߰�\n2. �� �� ����\n3. ��� ����\n4. ����\n5.�� �� ����\n");
		printf("���� �� �� �� = %d\n", taskCount);
		printf("------------------\n");
		scanf_s("%d", &choice);

		int terminate = 0; // ���Ḧ ���� flag
		int delIndex = -1;  // �� �� ������ ���� index ���� ����
		int changeIndex = -1; // �� �� ������ ���� index ���� ����
		char ch; // �� �� ������ ���۸� �ޱ� ���� ���� ����

		// �Է¿� ���� ��� ����
		switch (choice) {
		case 1:  // 1. �� �� �߰�
			addTask(tasks[taskCount]);
			taskCount++;  // �� ���� �� 1 ����
			break;
		case 2:  // 2. �� �� ����
			printf("������ �� ���� ��ȣ�� �Է����ּ���. (1���� ����):");
			scanf_s("%d", &delIndex);  // ����ڷκ��� ������ �� ���� ��ȣ �Է¹ޱ�
			if (delIndex > taskCount || delIndex <= 0) {
				printf("���� ������ ������ϴ�.\n");
			}  // ���� �� ��ȣ�� ����Ǿ��ִ� �� ���� ������ ���ų� 0,���� �� ��� ���� �޼��� ���
			else {
				delTask(delIndex, taskCount);
				taskCount -= 1;  // �� ���� �� 1 ����
			}
			break;
		case 3:  // 3. �� �� ���
			printf("�� �� ���\n");
			printTask(taskCount);
			break;
		case 4:  // 4. ���α׷� ����
			terminate = 1;
			break;
		
		default:  // 1~ 4 ���� �޴� ��ȣ�� �Է����� �ʾ��� ���
			printf("�߸��� �����Դϴ�. �ٽ� �����ϼ���.\n");
		}

		if (terminate == 1) {
			printf("���Ḧ �����ϼ̽��ϴ�. ���α׷��� �����մϴ�.\n");
			break;
		}
		
	}
}