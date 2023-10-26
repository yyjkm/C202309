#include <stdio.h>
#define MAX_TASKS 10
#define CHAR_NUM 100
#include <string.h>

int main() {
	char tasks[MAX_TASKS][CHAR_NUM] = { "" }; // �� �� ����� �����ϱ� ���� 10 x 100 ũ���� 2���� �迭
	int taskCount = 0; // �� ���� ���� ��Ÿ���� ���� ����

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

		int terminate = 0; // ���Ḧ ���� ����
		int delIndex = -1;  // �� �� ������ ���� index ���� ����
		int changeIndex = -1; // �� �� ������ ���� index ���� ����

		// 1~4���� �Է¿� ���� ��� ����
		switch (choice) {
		case 1:  // 1. �� �� �߰�
			printf("�� ���� �Է��ϼ��� (���� ���� �Է��ϼ���): ");
			scanf_s("%s", tasks[taskCount], (int)sizeof(tasks[taskCount]));  // ����ڷκ��� �� ���� �Է¹ޱ�
			printf("�� �� ""%s""�� ����Ǿ����ϴ�\n\n", tasks[taskCount]);
			taskCount++;  // �� ���� �� 1 ����
			break;
		case 2:  // 2. �� �� ����
			printf("������ �� ���� ��ȣ�� �Է����ּ���. (1���� ����):");
			scanf_s("%d", &delIndex);  // ����ڷκ��� ������ �� ���� ��ȣ �Է¹ޱ�
			if (delIndex > taskCount || delIndex <= 0) {
				printf("���� ������ ������ϴ�.\n");
			}  // ���� �� ��ȣ�� ����Ǿ��ִ� �� ���� ������ ���ų� 0,���� �� ��� ���� �޼��� ���
			else {
				printf("%d. %s : �� ���� �����մϴ�.\n", delIndex, tasks[delIndex - 1]);
				strcpy_s(tasks[delIndex - 1], sizeof(tasks[delIndex - 1]), "");  // ���� �� �� �Ͽ� ""���ڿ� ����
				for (int i = delIndex; i < taskCount + 1; i++) {
					strcpy_s(tasks[i - 1], sizeof(tasks[i]), tasks[i]);  // ���� �� �ڿ� �ִ� �� �� ������ �ű��
				}
				taskCount -= 1;  // �� ���� �� 1 ����
			}
			break;
		case 3:  // 3. �� �� ���
			printf("�� �� ���\n");
			for (int i = 0; i < taskCount; i++) {
				printf("%d. %s \n", i + 1, tasks[i]);
			}  // �ε��� 0�� ���� taskCount ���� �� �� ���
			printf("\n");
			break;
		case 4:  // 4. ���α׷� ����
			terminate = 1;
			break;
		case 5:  // 5. �� �� ����
			printf("������ �� ���� ��ȣ�� �Է����ּ���. (1���� ����): ");
			scanf_s("%d", &changeIndex);  // ����ڷκ��� ���� �� �� ���� ��ȣ �Է¹ޱ�
			if (changeIndex > taskCount || changeIndex <= 0) {
				printf("���� ������ ������ϴ�.\n");
			}  // ���� �� ��ȣ�� ����Ǿ��ִ� �� ���� ������ ���ų� 0, ���� �� ��� ���� �޼��� ���
			else {
				printf("%d. %s : �� ���� �����մϴ�.\n", changeIndex, tasks[changeIndex - 1]);
				printf("������ �� ���� ������ �Է����ּ���.\n");
				scanf_s("%s", tasks[changeIndex - 1], (int)sizeof(tasks[changeIndex-1]));  // ����ڷκ��� ������ �� ���� ���� �Է��޾� ���� �����ϱ�
				printf("%d. %s : ���Ӱ� �����Ǿ����ϴ�. \n", changeIndex, tasks[changeIndex - 1]);
			}
			break;
		default:  // 1~ 4 ���� �޴� ��ȣ�� �Է����� �ʾ��� ���
			printf("�߸��� �����Դϴ�. �ٽ� �����ϼ���.\n");
		}

		if (terminate == 1) {
			printf("���Ḧ �����ϼ̽��ϴ�. ���α׷��� �����մϴ�.\n");
			break;
		}
		if (taskCount == 10) {
			printf("�� ���� 10���� �� á���Ƿ� ���α׷��� �����մϴ�.\n");
			break;  // �� ���� 10���� �� ���� ���α׷� ����
		}
		
	}
}