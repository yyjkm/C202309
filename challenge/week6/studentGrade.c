#include <stdio.h>
#define STUDENTS 5  // ��� STUDENTS ����

void classifyStudents(int scores[], char targetGrade) {
	printf("�л� ���� �з�:\n");
	char grade = ' ';
	for (int i = 0; i < STUDENTS; i++) {
		if (scores[i] >= 90) {
			grade = 'A';
		}  // scores[i]�� 90 �̻��̸� ���� grade �� A ����
		else if (scores[i] >= 80) {
			grade = 'B';
		}  // scores[i]�� 80 �̻��̸� ���� grade �� B ����
		else if (scores[i] >= 70) {
			grade = 'C';
		}  // scores[i]�� 70 �̻��̸� ���� grade �� C ����
		else if (scores[i] >= 60) {
			grade = 'D';
		}  // scores[i]�� 60 �̻��̸� ���� grade �� D ����
		else {
			grade = 'F';
		}  // scores[i]�� �� �� �̸� ���� grade �� F ����
		if (targetGrade == grade) {
			printf("%d �л��� %c ������ �޾ҽ��ϴ�", i + 1, targetGrade);
		}  // �Է¹��� targetGrade �� grade�� ��ġ�� �л��� ���� ���
	}
}  // �Լ� classifyStudnets ���� ����

int sumScores(int scores[]) {
	int i = scores[0] + scores[1] + scores[2] + scores[3] + scores[4];  // scores[0] ������ scores[5] ������ ���� ���� i �� ����
	return i;  // i �� ��ȯ
}

double averageScores(int scores[]) {
	double ave;
	double i = scores[0] + scores[1] + scores[2] + scores[3] + scores[4];
	ave = i / STUDENTS;  // �� �� i�� STUDENTS �� ������ ��� ���� ave�� ����
	return ave;  // ave �� ��ȯ
}  // 

void printRanks(int scores[]) {
	int Rank = 5;
	for (int i = 0; i < STUDENTS; i++) {
		printf("%d �л��� ������ %d�Դϴ�", i + 1,Rank);
	}
}

int main() {
	int scores[STUDENTS];  // �迭 scores ���� 

	for (int i = 0; i < STUDENTS; i++) {
		printf("�л� %d�� ������ �Է��ϼ���: ", i + 1);
		scanf_s("%d", &scores[i]);
	}  // �л� 5���� ������ ����ڷκ��� �Է¹ޱ�

	char ch = getchar();  // ���� �ӽ� ���� ����, ���� ����� ����

	char target;
	printf("Ư�� ���� (A, B, C, D, F)�� �Է��Ͻÿ�: ");
	scanf_s("%c", &target, 1);  // ����ڷκ��� target ������ ���� A,B,C,D,F�� �Է� �ޱ�

	classifyStudents(scores, target);

	int sum = sumScores(scores);  // ������ sum �� ����
	double average = averageScores(scores);  // ����� average�� ����
	printf("�л��� ������ �� ���� %d �̰�, ��� ���� %lf�Դϴ�. \n", sum, average);

	printRanks(scores);

	return 0;
}