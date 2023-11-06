#include <stdio.h>
#define STUDENTS 5
#define SUBJECTS 3
#define CHARNUM 20

char subjectNames[SUBJECTS][CHARNUM] = { "����", "�߰����", "�⸻���" };
char studentNames[STUDENTS][CHARNUM] = { "" }; // �л� �̸��� ������ �迭
double studentScores[STUDENTS][SUBJECTS] = { 0.0 }; // �� �л��� ���� �� ������ ������ �迭

double  printStudentResults();  // �л� �� ��� ���� ����ϴ� �Լ�
double printSubjectResults();  // ���� �� ��� ���� ����ϴ� �Լ�

int main() {
	printf("�л� %d���� �̸��� �Է��� �����մϴ�. \n", STUDENTS);
	// TODO 1.1: �л� �̸��� �Է¹޴� �ڵ� ��� �ۼ�
	for (int i = 0; i < STUDENTS; i++) {
		printf("\t%d��° �л��� �̸��� �Է��ϼ��� : ", i + 1);
		scanf_s("%s", studentNames[i], (int)sizeof(studentNames[i]));
	}

	// �Էµ� �л� �̸��� �� ����Ǿ����� Ȯ���ϴ� �ڵ� ���
	printf("�л� �̸��� ��� �ԷµǾ����ϴ�. \n");
	printf("�Էµ� �л� �̸��� ������ �����ϴ�. \n");
	for (int i = 0; i < STUDENTS; i++) {
		printf("%s", studentNames[i]);
		if (i != STUDENTS - 1) {
			printf(", ");
		}
	}
	printf("\n");
	printf("--------------------\n");
	printf("�� �л��� %s, %s, %s ������ ���ʴ�� �Է����ּ���. (���� ����)\n ", subjectNames[0], subjectNames[1], subjectNames[2]);

	// TODO 1.2: �л����� ���� �� ������ �Է¹޴� �ڵ� ��� �ۼ�
	for (int i = 0; i < STUDENTS; i++) {
		printf("\t%s�� ����: ", studentNames[i]);
		scanf_s("%lf %lf %lf", &studentScores[i][0], &studentScores[i][1], &studentScores[i][2]);  // �л� ���� ���� �� ���� �Է¹ޱ�
	}

	printf("�л����� ���� ������ ��� �Է� �Ǿ����ϴ�.\n");
	printf("--------------------\n");
	printf("�л� �� ������ ������ �����ϴ� \n");

	// TODO 1.3: �л� �� ��� ������ ����ϴ� �ڵ� ��� �ۼ� >> ���� �Լ�ȭ
	printStudentResults();

	printf("--------------------\n");
	printf("���� �� ��� ������ �Ʒ��� �����ϴ�. \n");

	// TODO 1.4: ���� �� ��� ������ ����ϴ� �ڵ� ��� �ۼ� >> ���� �Լ�ȭ
	printSubjectResults();

	printf("���α׷��� �����մϴ�. \n");
	return 0;
}

double  printStudentResults() {
	for (int i = 0; i < STUDENTS; i++) {
		double sum = 0;
		for (int j = 0; j < SUBJECTS; j++) {
			sum += studentScores[i][j]; // �Է¹��� �л� �� �������� ���� ���ϱ�
		}
		double average = sum / SUBJECTS;  // �� ���� ���� ����  �л� �� ��� ���ϱ�
		printf("\t%s�� ��� ����: %.2lf\n", studentNames[i], average);
	}
}

double printSubjectResults() {
	for (int i = 0; i < SUBJECTS; i++) {
		double sum = 0;
		for (int j = 0; j < STUDENTS; j++) {
			sum += studentScores[j][i]; // �Է¹��� ���� �� �������� ���� ���ϱ�
		}
		double average = sum / STUDENTS;  // �� ���� �л� ���� ������ ���� �� ��� ���ϱ�
		printf("\t%s�� ��� ����: %.2lf �Դϴ�.\n", subjectNames[i], average);
	}
}
