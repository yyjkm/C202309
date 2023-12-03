#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char name[10];  // �л��� �̸��� �����ϴ� ��� ����
	int score;  // �л��� ������ �����ϴ� ��� ����
}Student;

int sumScores(Student* students, int student_number) { //�л��� ������ �� ���� ��
	int sum = 0;
	for (int i = 0; i < student_number; i++) {
		sum += students[i].score;
	}
	return sum;
}

double averageScores(Student* students, int student_number) { //�� �л� ������ ����� ��
	double avg;
	int sum = sumScores(students, student_number);
	avg = (double)sum / (double)student_number;
	return avg;
}

void classifyStudents(Student* students, char targetGrade, int student_number) { //�л� ������ ���� ����� ����
	printf("�л� ���� �з�:\n");
	char grade = ' ';
	for (int i = 0; i < student_number; i++) {
		if (students[i].score >= 90) {
			grade = 'A';
		}
		else if (students[i].score >= 80) {
			grade = 'B';
		}
		else if (students[i].score >= 70) {
			grade = 'C';
		}
		else if (students[i].score >= 60) {
			grade = 'D';
		}
		else {
			grade = 'F';
		}
		if (targetGrade == grade) {
			printf("%s �л��� %c ������ �޾ҽ��ϴ�.\n", students[i].name, targetGrade);
		}
	}
}

void printranks(Student* students, int student_number) {  // �л��� �������� ������ ���� ������ ��������
	int rank;
	for (int i = 0; i < student_number; i++) {
		rank = 1;
		for (int j = 0; j < student_number; j++) {
			if (students[j].score > students[i].score) {
				rank++;
			}
		}
		printf("%s �л��� ������ %d�Դϴ�. \n", students[i].name, rank);
	}
}

int main() {
	int number;
	printf("�л� ���� �Է����ּ��� : ");
	scanf_s("%d", &number);

	Student* students = (Student*)malloc(number * sizeof(Student));

	// �Է¹��� student_number �� ��ŭ �л��� �̸��� ������ �Է¹���
	for (int i = 0; i < number; i++) {
		printf("�л� %d�� �̸��� �Է����ּ��� : ", i + 1);
		scanf_s("%s", students[i].name, (int)sizeof(students[i].name));
		printf("�л� %d�� ������ �Է����ּ��� : ", i + 1);
		scanf_s("%d", &students[i].score);
	}
	char ch = getchar();

	char targetGrade;

	printf("Ư�� ���� (A, B, C, D, F)�� �Է��Ͻÿ�:");
	scanf_s("%c", &targetGrade, 1);

	classifyStudents(students, targetGrade, number);
	int sum = sumScores(students, number);
	double average = averageScores(students, number);

	printf("�л��� ������ �� ���� %d �̰�, ��� ���� %lf�Դϴ�.\n", sum, average);
	printranks(students, number);

	free(students);
	return 0;

}