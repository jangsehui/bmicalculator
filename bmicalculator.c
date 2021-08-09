#include <stdio.h>

void bmijudge(double userbmi);

int main()
{
	double bmi, weight, height; //������� ��ġ�� ������ ������ �����Ѵ�. 

	printf("===BMI ��ġ�� ���ϴ� ���α׷��Դϴ�. === \n\n");
	printf("������� ������ (kg)�� �Է��ϼ���. \n");
	scanf("%lf", &weight); //����ڷκ��� �Է¹��� �����Ը� weight������ �����Ѵ�.
	while (getchar() != '\n'); //�Է¹��� ����
	printf("������� Ű(M)�� �Է��ϼ���. \n"); //����ڷκ��� �Է¹��� Ű�� height������ �����Ѵ�.
	scanf("%lf", &height);
	while (getchar() != '\n');

	bmi = weight / (height*height); //bmi������ ����
	printf("User's weight is %0.2lf kg  ", weight); //������� ��ġ�� ����Ͽ� ��Ÿ����.
	printf("User's height is %0.2lf m  ", height);
	printf("User's bmi is %0.2lf  \n", bmi);

	bmijudge(bmi);

	printf("\n"); 
	printf("**BMI VALUES** \n");
	printf("Underweight : less than 18.5 \n");
	printf("Normal: between 18.5 and 24.9 \n");
	printf("Overweight: between 25 and 29.9 \n");
	printf("Obese: 30 or greater ");
	//BMI���� �Ǵ� ������ ����Ѵ�.
	return 0;


}

void bmijudge(double userbmi)
{
	if (userbmi <= 18.50) //if���� �̿��Ͽ� ������� bmi��ġ���� ����� ����Ѵ�.
		printf("Under weight. \n");
	else if (userbmi >= 18.50 && userbmi <= 24.90)
		printf("Normal. \n");
	else if (userbmi >= 25.00 && userbmi <= 29.90)
		printf("Over weight. \n");
	else
		printf("Obese. \n");
}