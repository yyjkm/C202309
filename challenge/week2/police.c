#include <stdio.h>

int main() {
	char name[256];  // 변수명이 name인 문자열 변수 선언
	int age;  // 변수명이 age인 정수형 변수 선언
	double weight;  // 변수명이 weight인 실수형 변수 선언
	float height;  // 변수명이 height인 실수형 변수 선언
	char what[512];  // 변수명이 what인 문자열 변수 선언

	printf("이름:");
	scanf_s("%s", name, sizeof(name));  // 사용자가 name 변수에 이름 입력
	
	printf("나이:");
	scanf_s("%d", &age);  // 사용자가 age 변수에 나이 입력
	
	printf("몸무게:");
	scanf_s("%lf", &weight);  // 사용자가 weight 변수에 몸무게 입력
	
	printf("키:");
	scanf_s("%f", &height);  // 사용자가 height 변수에 키 입력

	printf("범죄명:");
	scanf_s("%s", what, sizeof(what));  // 사용자가 what 변수에 범죄명 입력

	printf("----범죄자 정보----\n");  // 입력한 범죄자 정보 한눈에 표시
	printf("이름: %s\n", name);
	printf("나이: %d\n", age);
	printf("몸무게: %lf\n", weight);
	printf("키: %f\n", height);
	printf("범죄명: %s", what);
	
	return 0;
}