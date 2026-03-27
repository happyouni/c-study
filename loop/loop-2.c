#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main(void)
{
	//int i,j; 
	for (int i = 2; i <= 9; i++)

	{
		printf("< %d 단 >\n", i);
		for (int j = 1; j <= 9;j++)
		{
			printf("%d * %d = %-3d\n", i, j, i * j);
		} //j for 끝
	}//i for 끝
	return 0;
}//main 끝

	//int i,j; 	
	//printf("원하는 단을 입력하세요: ");
	//scanf("%d", &i); 
	//printf("< %d 단 >\n", i);
	//for (j = 1; j <= 9;j++)
	//{
	//	printf("%d * %d = %d\t", i, j, i * j);
	//	
	//}




