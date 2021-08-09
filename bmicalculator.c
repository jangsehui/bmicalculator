#include <stdio.h>

void bmijudge(double userbmi);

int main()
{
	double bmi, weight, height; //사용자의 수치를 대입할 변수를 선언한다. 

	printf("===BMI 수치를 구하는 프로그램입니다. === \n\n");
	printf("사용자의 몸무게 (kg)을 입력하세요. \n");
	scanf("%lf", &weight); //사용자로부터 입력받은 몸무게를 weight변수에 저장한다.
	while (getchar() != '\n'); //입력버퍼 제거
	printf("사용자의 키(M)를 입력하세요. \n"); //사용자로부터 입력받은 키를 height변수에 저장한다.
	scanf("%lf", &height);
	while (getchar() != '\n');

	bmi = weight / (height*height); //bmi지수의 계산식
	printf("User's weight is %0.2lf kg  ", weight); //사용자의 수치를 출력하여 나타낸다.
	printf("User's height is %0.2lf m  ", height);
	printf("User's bmi is %0.2lf  \n", bmi);

	bmijudge(bmi);

	printf("\n"); 
	printf("**BMI VALUES** \n");
	printf("Underweight : less than 18.5 \n");
	printf("Normal: between 18.5 and 24.9 \n");
	printf("Overweight: between 25 and 29.9 \n");
	printf("Obese: 30 or greater ");
	//BMI지수 판단 기준을 출력한다.
	return 0;


}

void bmijudge(double userbmi)
{
	if (userbmi <= 18.50) //if문을 이용하여 사용자의 bmi수치별로 결과를 출력한다.
		printf("Under weight. \n");
	else if (userbmi >= 18.50 && userbmi <= 24.90)
		printf("Normal. \n");
	else if (userbmi >= 25.00 && userbmi <= 29.90)
		printf("Over weight. \n");
	else
		printf("Obese. \n");
}