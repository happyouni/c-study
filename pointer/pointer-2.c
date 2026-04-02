#include <stdio.h>

int main(void)
{
	int i = 3000; 
	int* p = NULL;  // 포인터변수 선언

	p = &i;   // i변수의 주소를 p 포인터 변수에  줌

	printf("p = %p\n", p);   
	//%p : 주소를 출력하는 서식 문자
	printf("&i = %p\n\n", &i);

	printf("i = %d\n", i);
	printf("*p = %d\n", *p);  
	//주소에 저장된 내용에 접근하는 포인터
	i = 4000;
	printf("i = %d\n", i);
	*p = 5000;
	printf("*p = %d\n", *p);
	//------------------
	int x = 10, y = 20;
	int* pi;// 포인터변수

	pi = &x;//
	printf("pi = %p\n", pi);//
	printf("*pi = %d\n", *pi);//10

	pi = &y; //
	printf("pi = %p\n", pi);
	printf("*pi = %d\n", *pi);//20
	return 0;
}