#include <stdio.h>

int main()
{
	int num1, num2, res1;
	double res2;
	char op, a;
	while (1) {

		printf("첫번째 숫자를 입력하세요:  ");
		scanf_s("%d", &num1);
		printf("연산자를 입력하세요(+ - * /):  ");
		scanf_s(" %c", &op);
		printf("두번째 숫자를 입력하세요:  ");
		scanf_s("%d", &num2);

		switch (op) {

		case '+':
			res1 = num1 + num2;
			break;
		case '-':
			res1 = num1 - num2;
			break;

		case '*':
			res1 = num1 * num2;
			break;

		case '/':
			res2 = (double)num1 / num2;
			break;
		}
		if (op == '+' || op == '-' || op == '*')
			printf("연산 결과 : %d", res1);
		else if (op == '/')
			printf("연산결과 : %.2f", res2);
		else
			printf("입력 오류");

		printf("연산을 종료 하시겠습니까?(Y,y)");
		scanf_s(" %c", &a);
		if (a == 'Y' || a == 'y')
			break;
	}
	return 0;
}