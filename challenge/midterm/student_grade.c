#include <stdio.h>
#define STUDENTS 5
#define SUBJECTS 3
#define CHARNUM 20

char subjectNames[SUBJECTS][CHARNUM] = { "퀴즈", "중간고사", "기말고사" };
char studentNames[STUDENTS][CHARNUM] = { "" }; // 학생 이름을 저장할 배열
double studentScores[STUDENTS][SUBJECTS] = { 0.0 }; // 각 학생의 시험 별 성적을 저장할 배열

double  printStudentResults();  // 학생 별 평균 점수 출력하는 함수
double printSubjectResults();  // 시험 별 평균 점수 출력하는 함수

int main() {
	printf("학생 %d명의 이름의 입력을 시작합니다. \n", STUDENTS);
	// TODO 1.1: 학생 이름을 입력받는 코드 블록 작성
	for (int i = 0; i < STUDENTS; i++) {
		printf("\t%d번째 학생의 이름을 입력하세요 : ", i + 1);
		scanf_s("%s", studentNames[i], (int)sizeof(studentNames[i]));
	}

	// 입력된 학생 이름이 잘 저장되었는지 확인하는 코드 블록
	printf("학생 이름이 모두 입력되었습니다. \n");
	printf("입력된 학생 이름은 다음과 같습니다. \n");
	for (int i = 0; i < STUDENTS; i++) {
		printf("%s", studentNames[i]);
		if (i != STUDENTS - 1) {
			printf(", ");
		}
	}
	printf("\n");
	printf("--------------------\n");
	printf("각 학생의 %s, %s, %s 점수를 차례대로 입력해주세요. (띄어쓰기 구분)\n ", subjectNames[0], subjectNames[1], subjectNames[2]);

	// TODO 1.2: 학생들의 시험 별 점수를 입력받는 코드 블록 작성
	for (int i = 0; i < STUDENTS; i++) {
		printf("\t%s의 성적: ", studentNames[i]);
		scanf_s("%lf %lf %lf", &studentScores[i][0], &studentScores[i][1], &studentScores[i][2]);  // 학생 마다 시험 별 점수 입력받기
	}

	printf("학생들의 시험 점수가 모두 입력 되었습니다.\n");
	printf("--------------------\n");
	printf("학생 별 성적은 다음과 같습니다 \n");

	// TODO 1.3: 학생 별 평균 점수를 출력하는 코드 블록 작성 >> 이후 함수화
	printStudentResults();

	printf("--------------------\n");
	printf("과목 별 평균 점수는 아래와 같습니다. \n");

	// TODO 1.4: 과목 별 평균 점수를 출력하는 코드 블록 작성 >> 이후 함수화
	printSubjectResults();

	printf("프로그램을 종료합니다. \n");
	return 0;
}

double  printStudentResults() {
	for (int i = 0; i < STUDENTS; i++) {
		double sum = 0;
		for (int j = 0; j < SUBJECTS; j++) {
			sum += studentScores[i][j]; // 입력받은 학생 별 점수들의 합을 구하기
		}
		double average = sum / SUBJECTS;  // 총 합을 시험 수로  학생 별 평균 구하기
		printf("\t%s의 평균 점수: %.2lf\n", studentNames[i], average);
	}
}

double printSubjectResults() {
	for (int i = 0; i < SUBJECTS; i++) {
		double sum = 0;
		for (int j = 0; j < STUDENTS; j++) {
			sum += studentScores[j][i]; // 입력받은 과목 별 점수들의 합을 구하기
		}
		double average = sum / STUDENTS;  // 총 합을 학생 수로 나누어 과목 별 평균 구하기
		printf("\t%s의 평균 점수: %.2lf 입니다.\n", subjectNames[i], average);
	}
}
