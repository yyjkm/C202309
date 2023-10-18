#include <stdio.h>
#define NUMCITY 3  // ��� NUMCITY ����
#define NUMPEOPLE 2  // ��� NUMPEOPLE ����

char names[NUMPEOPLE][10];  // 2���� �迭 names ����
char cities[NUMCITY][10];  // 2���� �迭 cities ����

void calculateTravelDays();  // calculateTravelDays �Լ� ���� ����
int getSum(int numArray[]);  // getSum �Լ� ���� ����
double getAverage(int numArray[]);  // getAverage �Լ� ���� ����
void getFamousCity(double dayArray[]);  // getFamousCity �Լ� ���� ����

int main() {

	// ����ڷκ��� ���� �̸� �Է¹ޱ�
	printf("%d���� ���ø��� ���ʴ�� �Է����ּ���. \n", NUMCITY);
	for (int i = 0; i < NUMCITY; i++) {
		scanf_s("%s", cities[i], (int)sizeof(cities[i]));
	}

	// ����ڷκ��� ��� �̸� �ޱ�
	printf("%d���� ������ �̸��� ���ʴ�� �Է����ּ���. \n", NUMPEOPLE);
	for (int i = 0; i < NUMPEOPLE; i++) {
		scanf_s("%s", names[i], (int)sizeof(names[i]));
	}

	// �Լ� ȣ��
	calculateTravelDays();

	return 0;
}

void calculateTravelDays() {
	int travelDays[NUMCITY][NUMPEOPLE];

	// �� ���ÿ��� �� ����� ���� �� �� �Է¹ޱ�
	for (int i = 0; i < NUMCITY; i++) {
		for (int j = 0; j < NUMPEOPLE; j++) {
			printf("���� %s���� ��� %s�� ���� �� ���� �Է��ϼ���: ", cities[i], names[j]);
			scanf_s("%d", &travelDays[i][j]);
		}
	}

	// �� ���ú� �� �� �� �� ��� �� �� ��� �� ���
	for (int i = 0; i < NUMCITY; i++) {
		int totalDay = getSum(travelDays[i], NUMPEOPLE);
		double averageDay = getAverage(travelDays[i], NUMPEOPLE);
		printf("���� %s���� ���� �� �ϼ� : %d ��� �� ��: %.2f\n", cities[i], totalDay, averageDay);
		averageDays[i] = averageDay;
	}
	getFamousCity(averageDays, NUMCITY);
}

int getSum(int numArray[], int length) {
	int totalDays = 0;

	// �� ���ÿ��� ���� �� �ϼ� ���
	for (int i = 0; i < length; i++) {
		totalDays += numArray[i];
	}
	return totalDays;
}

double getAverage(int numArray[], int length) {
	int sum = getsum(numArray, length);

	// �� ���ÿ��� ���� ��� �ϼ� ���
	double averageDays = (double)sum / length;
	return averageDays;
}

void getFamousCity(double dayArray[], int length) {
	double maxDay = 0;
	int maxDayIndex = 0;

	// ���� �� �ӹ� ��� �ϼ� ��� �� ���� �α��ִ� ���� ���
	for (int i = 0; i < length; i++) {
		if (dayArray[i] > maxDay) {
			maxDay = dayArray[i];
			maxDayIndex = i;
		}
	}
	printf("����� �������� ���� �α��־��� ���ô� %s �Դϴ�. (��ոӹ���: %.2f)\n", cities[maxDayIndex], maxDay);
}
