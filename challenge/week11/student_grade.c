#include <stdio.h>
#define STUDENTS 5  // ��� STUDENTS ����

void classifyStudents(int* scores, char targetGrade) {
    printf("�л� ���� �з�:\n");
    char grade = ' ';
    for (int i = 0; i < STUDENTS; i++) {
        if (*(scores + i) >= 90) {
            grade = 'A';
        }  // scores[i]�� 90 �̻��̸� ���� grade �� A ����
        else if (*(scores + i) >= 80) {
            grade = 'B';
        }  // scores[i]�� 80 �̻��̸� ���� grade �� B ����
        else if (*(scores + i) >= 70) {
            grade = 'C';
        }  // scores[i]�� 70 �̻��̸� ���� grade �� C ����
        else if (*(scores + i) >= 60) {
            grade = 'D';
        }  // scores[i]�� 60 �̻��̸� ���� grade �� D ����
        else {
            grade = 'F';
        }  // scores[i]�� �� �� �̸� ���� grade �� F ����
        if (targetGrade == grade) {
            printf("%d �л��� %c ������ �޾ҽ��ϴ�. \n", i + 1, targetGrade);
        }  // �Է¹��� targetGrade �� grade�� ��ġ�� �л��� ���� ���
    }
}

int sumScores(int* scores) {
    int sum = 0;
    for (int i = 0; i < STUDENTS; i++) {
        sum += *(scores + i);  // scores[0]���� scores[i]���� ���� ���� sum�� ����
    }
    return sum;
}  // �л� ������ �������� ���� ���ϴ� �Լ�

double averageScores(int* scores) {
    int sum = sumScores(scores);
    double average = (double)sum / (double)STUDENTS;;
    return average;
}  // �л����� �� ������ ���� ����� ���ϴ� �Լ�

void printRanks(int* scores) {
    int ranks[STUDENTS];
    for (int i = 0; i < STUDENTS; i++) {
        ranks[i] = 1;
        for (int j = 0; j < STUDENTS; j++) {
            if (*(scores+j) > *(scores + i)) {
                ranks[i]++;
            }
        }
        printf("%d �л��� ������ %d �Դϴ�. \n", i + 1, ranks[i]);
    }
}  // �л��� ������ �����鿡 ���� ������ ���ϴ� �Լ�

int main() {
    int scores[STUDENTS];  // �迭 scores ���� 

    for (int i = 0; i < STUDENTS; i++) {
        printf("�л� %d�� ������ �Է��ϼ���: ", i + 1);
        scanf_s("%d", &scores[i]);
    }  // �л� 5���� ������ ����ڷκ��� �Է¹ޱ�

    char ch = getchar();  // ���� �ӽ� ���� ����, ���� ����� ����

    char target;
    printf("Ư�� ���� (A, B, C, D, F)�� �Է��Ͻÿ�: ");
    scanf_s(" %c", &target, 1);  // ����ڷκ��� target ������ ���� A,B,C,D,F�� �Է� �ޱ�

    classifyStudents(scores, target);

    int sum = sumScores(scores);  // ������ sum �� ����
    double average = averageScores(scores);  // ����� average�� ����
    printf("�л��� ������ �� ���� %d �̰�, ��� ���� %lf�Դϴ�. \n", sum, average);

    printRanks(scores);

    return 0;
}
