#include <stdio.h>
#define STUDENTS 5  // 상수 STUDENTS 선언

void classifyStudents(int* scores, char targetGrade) {
    printf("학생 성적 분류:\n");
    char grade = ' ';
    for (int i = 0; i < STUDENTS; i++) {
        if (*(scores + i) >= 90) {
            grade = 'A';
        }  // scores[i]가 90 이상이면 변수 grade 에 A 저장
        else if (*(scores + i) >= 80) {
            grade = 'B';
        }  // scores[i]가 80 이상이면 변수 grade 에 B 저장
        else if (*(scores + i) >= 70) {
            grade = 'C';
        }  // scores[i]가 70 이상이면 변수 grade 에 C 저장
        else if (*(scores + i) >= 60) {
            grade = 'D';
        }  // scores[i]가 60 이상이면 변수 grade 에 D 저장
        else {
            grade = 'F';
        }  // scores[i]가 그 외 이면 변수 grade 에 F 저장
        if (targetGrade == grade) {
            printf("%d 학생은 %c 점수를 받았습니다. \n", i + 1, targetGrade);
        }  // 입력받은 targetGrade 와 grade가 일치한 학생의 정보 출력
    }
}

int sumScores(int* scores) {
    int sum = 0;
    for (int i = 0; i < STUDENTS; i++) {
        sum += *(scores + i);  // scores[0]부터 scores[i]까지 더한 값을 sum에 저장
    }
    return sum;
}  // 학생 각각의 성적들의 합을 구하는 함수

double averageScores(int* scores) {
    int sum = sumScores(scores);
    double average = (double)sum / (double)STUDENTS;;
    return average;
}  // 학생들의 총 성적에 대한 평균을 구하는 함수

void printRanks(int* scores) {
    int ranks[STUDENTS];
    for (int i = 0; i < STUDENTS; i++) {
        ranks[i] = 1;
        for (int j = 0; j < STUDENTS; j++) {
            if (*(scores+j) > *(scores + i)) {
                ranks[i]++;
            }
        }
        printf("%d 학생의 순위는 %d 입니다. \n", i + 1, ranks[i]);
    }
}  // 학생들 각각의 성적들에 대한 순위를 구하는 함수

int main() {
    int scores[STUDENTS];  // 배열 scores 선언 

    for (int i = 0; i < STUDENTS; i++) {
        printf("학생 %d의 성적을 입력하세요: ", i + 1);
        scanf_s("%d", &scores[i]);
    }  // 학생 5명의 성적을 사용자로부터 입력받기

    char ch = getchar();  // 버퍼 임시 저장 변수, 엔터 지우기 위해

    char target;
    printf("특정 점수 (A, B, C, D, F)를 입력하시오: ");
    scanf_s(" %c", &target, 1);  // 사용자로부터 target 변수에 점수 A,B,C,D,F중 입력 받기

    classifyStudents(scores, target);

    int sum = sumScores(scores);  // 총합을 sum 에 저장
    double average = averageScores(scores);  // 평균을 average에 저장
    printf("학생들 점수의 총 합은 %d 이고, 평균 값은 %lf입니다. \n", sum, average);

    printRanks(scores);

    return 0;
}
