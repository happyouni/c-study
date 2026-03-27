//1~10 까지 숫자 출력

#include <stdio.h>

int main()
{

	for (int i = 1; i <=10; i++)//1~10
	{
		//7의 배수를 만나면 반복문 강제 탈출
		if (i % 7 == 0)
			//break;
			continue;
		//continue: 아래문장으로 내려가지않고
		//다시 반복문의 조건으로 올라가서 물어보고 반복
		printf("%d\n", i);
	}

		return 0;
}




