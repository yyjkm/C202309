#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char name[10];  // 학생들 이름을 저장하는 멤버 변수
	int score;  // 학생들 성적을 저장하는 멤버 변수
}Student;

int sumScores(Student* students, int student_number) { //학생들 성적의 총 합을 냄
	int sum = 0;
	for (int i = 0; i < student_number; i++) {
		sum += students[i].score;
	}
	return sum;
}

double averageScores(Student* students, int student_number) { //총 학생 성적의 평균을 냄
	double avg;
	int sum = sumScores(students, student_number);
	avg = (double)sum / (double)student_number;
	return avg;
}

void classifyStudents(Student* students, char targetGrade, int student_number) { //학생 성적에 맞춰 등급을 정함
	printf("학생 성적 분류:\n");
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
			printf("%s 학생은 %c 점수를 받았습니다.\n", students[i].name, targetGrade);
		}
	}
}

void printranks(Student* students, int student_number) {  // 학생들 개개인의 성적에 맞춰 순위를 배정해줌
	int rank;
	for (int i = 0; i < student_number; i++) {
		rank = 1;
		for (int j = 0; j < student_number; j++) {
			if (students[j].score > students[i].score) {
				rank++;
			}
		}
		printf("%s 학생의 순위는 %d입니다. \n", students[i].name, rank);
	}
}

int main() {
	int number;
	printf("학생 수를 입력해주세요 : ");
	scanf_s("%d", &number);

	Student* students = (Student*)malloc(number * sizeof(Student));

	// 입력받은 student_number 수 만큼 학생의 이름과 점수를 입력받음
	for (int i = 0; i < number; i++) {
		printf("학생 %d의 이름을 입력해주세요 : ", i + 1);
		scanf_s("%s", students[i].name, (int)sizeof(students[i].name));
		printf("학생 %d의 점수를 입력해주세요 : ", i + 1);
		scanf_s("%d", &students[i].score);
	}
	char ch = getchar();

	char targetGrade;

	printf("특정 점수 (A, B, C, D, F)를 입력하시오:");
	scanf_s("%c", &targetGrade, 1);

	classifyStudents(students, targetGrade, number);
	int sum = sumScores(students, number);
	double average = averageScores(students, number);

	printf("학생들 점수의 총 합은 %d 이고, 평균 값은 %lf입니다.\n", sum, average);
	printranks(students, number);

	free(students);
	return 0;

}